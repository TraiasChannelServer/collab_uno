#pragma once

#include "Scene/SceneDefine.h"

class GameSettingsScene : public App::Scene
{
public:
	GameSettingsScene(const InitData& init);
	void update() override;
	void draw() const override;

private:
	Rect m_startButton;
	Transition m_startTransition;

	Rect m_returnButton;
	Transition m_returnTransition;
};
