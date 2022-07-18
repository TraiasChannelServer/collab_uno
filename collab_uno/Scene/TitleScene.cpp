#include "Scene/TitleScene.h"

TitleScene::TitleScene(const InitData& init)
	: IScene(init)
	, m_startButton(Arg::center = Scene::Center(), 300, 60)
	, m_startTransition(0.4s, 0.2s)
	, m_settingButton(m_startButton.x, m_startButton.y + 100, m_startButton.w, m_startButton.h)
	, m_settingTransition(0.4s, 0.2s)
{
}

void TitleScene::update()
{
	m_startTransition.update(m_startButton.mouseOver());
	m_settingTransition.update(m_settingButton.mouseOver());

	if (m_startButton.mouseOver() || m_settingButton.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}

	if (m_startButton.leftClicked())
	{
		// ゲーム開始前のゲームの設定
		changeScene(SceneType::GameSettings);
	}
	if (m_settingButton.leftClicked())
	{
		// アプリの設定
		changeScene(SceneType::AppSettings);
	}
}

void TitleScene::draw() const
{
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));


	FontAsset(U"Title")(U"collab_uno").drawAt(TextStyle::OutlineShadow(0.2, ColorF(0.0, 0.3, 0.6), Vec2(2, 2), ColorF(0.0, 0.5)), Scene::Center().x, 120);

	m_startButton.draw(ColorF(1.0, m_startTransition.value())).drawFrame(2);
	FontAsset(U"Menu")(U"PLAY").drawAt(m_startButton.center(), ColorF(0.25));

	m_settingButton.draw(ColorF(1.0, m_settingTransition.value())).drawFrame(2);
	FontAsset(U"Menu")(U"SETTINGS").drawAt(m_settingButton.center(), ColorF(0.25));
}
