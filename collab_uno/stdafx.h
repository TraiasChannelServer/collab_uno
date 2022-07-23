// vectorとかファイルの内容が基本的に一生変わらないものはここにインクルードを書いてください
// もっとも、Siv3Dではvectorは使わずArrayを使うのでvectorはインクルードしません
// 本当にインクルードする必要があるのか、以下を見て確認してください
//
// Siv3Dではデータ型は以下を用います
// https://siv3d.github.io/ja-jp/api/classes/
//
// bool						ブーリアン型 (false または true)
// int8						符号付き 8 - bit 整数型(-128 ～ 127)
// uint8					符号無し 8 - bit 整数型(0 ～ 255)
// int16					符号付き 16 - bit 整数型(-32, 768 ～ 32, 767)
// uint16					符号無し 16 - bit 整数型(0 ～ 65, 535)
// int32					符号付き 32 - bit 整数型(-2, 147, 483, 648 ～ 2, 147, 483, 647)
// uint32					符号無し 32 - bit 整数型(0 ～ 4, 294, 967, 295)
// int64					符号付き 64 - bit 整数型(-9, 223, 372, 036, 854, 775, 808 ～ 9, 223, 372, 036, 854, 775, 807)
// uint64					符号無し 64 - bit 整数型(0 ～ 18, 446, 744, 073, 709, 551, 615)
// int128					符号付き 128 - bit 整数型
// uint128					符号無し 128 - bit 整数型
// size_t					オブジェクトのサイズを表現する符号なし 64 - bit 整数型(0 ～ 18, 446, 744, 073, 709, 551, 615)
// BigInt					任意精度多倍長整数型
// HalfFloat				半精度浮動小数点数型
// float					単精度浮動小数点数型
// double					倍精度浮動小数点数型
// BigFloat					有効数字100桁の浮動小数点数型
// Byte						ビット列としてのバイトデータを表す型
// char32					UTF - 32 のコードポイント（文字）
// String					文字列クラス(C++ の std::u32string 相当)
// std::array<Type, N>		固定長配列
// Array<Type>				動的配列(C++ の std::vector<Type> 相当)
// Grid<Type>				二次元配列
// Optional<Type>			無効値を取りうる型(C++ の std::optional<Type> 相当)
// HashSet<Key>				ハッシュセット(C++ の std::unordered_set<Key> 相当)
// HashTable<Key, Value>	ハッシュテーブル(C++ の std::unordered_map<Key, Value> 相当)
// FilePath					String のエイリアス
// StringView				所有権を持たない文字列クラス(C++ の std::string_view 相当)
// FilePathView				StringView のエイリアス
//

# pragma once
//# define NO_S3D_USING
# include <Siv3D.hpp>

// このコメントの下に追加のインクルードファイルを書いていってください

