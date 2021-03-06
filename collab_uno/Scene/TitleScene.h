#pragma once

#pragma once

#include "Scene/SceneDefine.h"

class TitleScene : public App::Scene
{
public:
	TitleScene(const InitData& init);
	void update() override;
	void draw() const override;

private:
	Rect m_startButton;
	Transition m_startTransition;

	Rect m_settingButton;
	Transition m_settingTransition;
};
