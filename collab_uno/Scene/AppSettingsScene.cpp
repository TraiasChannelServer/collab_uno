#include "Scene/AppSettingsScene.h"

AppSettingsScene::AppSettingsScene(const InitData& init)
	: IScene(init)
	, m_returnButton(Arg::center = Scene::Center(), 300, 60)
	, m_returnTransition(0.4s, 0.2s)
{
}

void AppSettingsScene::update()
{
	m_returnTransition.update(m_returnButton.mouseOver());

	if (m_returnButton.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}

	if (m_returnButton.leftClicked())
	{
		// タイトルへ戻る
		changeScene(SceneType::Title);
	}
}

void AppSettingsScene::draw() const
{
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));


	FontAsset(U"Title")(U"App Settings").drawAt(TextStyle::OutlineShadow(0.2, ColorF(0.0, 0.3, 0.6), Vec2(2, 2), ColorF(0.0, 0.5)), Scene::Center().x, 120);

	m_returnButton.draw(ColorF(1.0, m_returnTransition.value())).drawFrame(2);
	FontAsset(U"Menu")(U"タイトル画面に戻る").drawAt(m_returnButton.center(), ColorF(0.25));
}
