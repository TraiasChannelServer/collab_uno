#pragma once

enum class SceneType
{
	Title,
};

struct SharedData
{
};

using App = SceneManager<SceneType, SharedData>;
