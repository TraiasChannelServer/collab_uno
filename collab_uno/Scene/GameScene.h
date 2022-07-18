#pragma once

#pragma once

#include "Scene/SceneDefine.h"

class GameScene : public App::Scene
{
public:
	GameScene(const InitData& init);
	void update() override;
	void draw() const override;

private:
};
