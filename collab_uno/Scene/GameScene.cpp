#include "Scene/GameScene.h"

GameScene::GameScene(const InitData& init)
	: IScene(init)
{
}

void GameScene::update()
{
}

void GameScene::draw() const
{
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));

	// DEBUG: 適当な文字列を描画
	FontAsset(U"Title")(U"Hello UNO!").drawAt(TextStyle::OutlineShadow(0.2, ColorF(0.0, 0.3, 0.6), Vec2(2, 2), ColorF(0.0, 0.5)), Scene::Center().x, 120);
}
