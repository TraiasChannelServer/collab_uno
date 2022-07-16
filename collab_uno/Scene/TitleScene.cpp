#include "TitleScene.h"

#include "Scene/SceneDefine.h"

TitleScene::TitleScene(const InitData& init)
	: IScene(init)
	, m_startButton(Arg::center = Scene::Center(), 300, 60)
{
}

void TitleScene::update()
{
	m_transition.update(m_startButton.mouseOver());

	if (m_startButton.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}

	if (m_startButton.leftClicked())
	{
		// DEBUG: 終了
		System::Exit();
	}
}

void TitleScene::draw() const
{
	Scene::SetBackground(ColorF{ 0.8, 0.9, 1.0 });

	m_startButton.draw(ColorF(1.0, m_transition.value())).drawFrame(2);
	FontAsset(U"Menu")(U"PLAY").drawAt(m_startButton.center(), ColorF{ 0.25 });
}
