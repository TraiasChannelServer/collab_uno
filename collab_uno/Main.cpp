// stdabx.hに書いてあるヘッダはプロジェクト内の全ファイルでインクルードされてることになっているのでincludeを書く必要はありません
// #include <Siv3D.hpp> // OpenSiv3D v0.6.4

#include "Scene/TitleScene.h"

void Main()
{
	// ウィンドウのリサイズに付いては以下を参照
	// https://zenn.dev/reputeless/books/siv3d-documentation/viewer/tutorial-scene
	Window::Resize(800, 600);
	Scene::SetResizeMode(ResizeMode::Keep);
	//Window::SetStyle(WindowStyle::Sizable);

	// アセット管理については以下を参照
	// https://zenn.dev/reputeless/books/siv3d-documentation/viewer/tutorial-asset
	FontAsset::Register(U"Menu", FontMethod::MSDF, 40, Typeface::Medium);

	App manager;
	manager.add<TitleScene>(SceneType::Title);

	while (System::Update())
	{
		if (not manager.update())
		{
			break;
		}
	}
}

//
// - Debug ビルド: プログラムの最適化を減らす代わりに、エラーやクラッシュ時に詳細な情報を得られます。
//
// - Release ビルド: 最大限の最適化でビルドします。
//
// - [デバッグ] メニュー → [デバッグの開始] でプログラムを実行すると、[出力] ウィンドウに詳細なログが表示され、エラーの原因を探せます。
//
// - Visual Studio を更新した直後は、プログラムのリビルド（[ビルド]メニュー → [ソリューションのリビルド]）が必要です。
//
// Siv3D リファレンス
// https://zenn.dev/reputeless/books/siv3d-documentation
//
// Siv3D Reference
// https://zenn.dev/reputeless/books/siv3d-documentation-en
//
// Siv3D コミュニティへの参加（Slack や Twitter, BBS で気軽に質問や情報交換ができます）
// https://zenn.dev/reputeless/books/siv3d-documentation/viewer/community
//
// Siv3D User Community
// https://zenn.dev/reputeless/books/siv3d-documentation-en/viewer/community
//
// 新機能の提案やバグの報告 | Feedback
// https://github.com/Siv3D/OpenSiv3D/issues
//
// Sponsoring Siv3D
// https://github.com/sponsors/Reputeless
//
