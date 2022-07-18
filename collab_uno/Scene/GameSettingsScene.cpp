#include "Scene/GameSettingsScene.h"

#include "Scene/GameScene.h"

GameSettingsScene::GameSettingsScene(const InitData& init)
	: IScene(init)
	, m_startButton(Arg::center = Scene::Center(), 300, 60)
	, m_startTransition(0.4s, 0.2s)
	, m_returnButton(m_startButton.x, m_startButton.y + 100, m_startButton.w, m_startButton.h)
	, m_returnTransition(0.4s, 0.2s)
{
}

void GameSettingsScene::update()
{
	m_startTransition.update(m_startButton.mouseOver());
	m_returnTransition.update(m_returnButton.mouseOver());

	if (m_startButton.mouseOver() || m_returnButton.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}

	if (m_startButton.leftClicked())
	{
		// ゲーム開始
		changeScene(SceneType::Game);
	}
	if (m_returnButton.leftClicked())
	{
		// タイトルへ戻る
		changeScene(SceneType::Title);
	}
}

void GameSettingsScene::draw() const
{
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));


	FontAsset(U"Title")(U"Game Settings").drawAt(TextStyle::OutlineShadow(0.2, ColorF(0.0, 0.3, 0.6), Vec2(2, 2), ColorF(0.0, 0.5)), Scene::Center().x, 120);

	m_startButton.draw(ColorF(1.0, m_startTransition.value())).drawFrame(2);
	FontAsset(U"Menu")(U"ゲーム開始").drawAt(m_startButton.center(), ColorF(0.25));

	m_returnButton.draw(ColorF(1.0, m_returnTransition.value())).drawFrame(2);
	FontAsset(U"Menu")(U"タイトル画面に戻る").drawAt(m_returnButton.center(), ColorF(0.25));
}
