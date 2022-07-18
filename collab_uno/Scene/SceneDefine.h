#pragma once

enum class SceneType
{
	Title,
	GameSettings,
	Game,
	AppSettings
};

struct SharedData
{
};

using App = SceneManager<SceneType, SharedData>;
