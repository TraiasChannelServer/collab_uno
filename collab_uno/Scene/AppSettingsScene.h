#pragma once

#include "Scene/SceneDefine.h"

class AppSettingsScene : public App::Scene
{
public:
	AppSettingsScene(const InitData& init);
	void update() override;
	void draw() const override;

private:
	Rect m_returnButton;
	Transition m_returnTransition;
};
