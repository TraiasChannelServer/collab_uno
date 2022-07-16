# collab_uno
## 概要
複数人でプログラミングしてみよう！
## プロジェクトの設定
### stdafx.hについて
`#include <...>`のような基本的にファイル内容が変更されないもののインクルードについては`stdafx.h`にインクルードを記述します。もちろん、ファイル内容がほとんど変更されないことが分かっていれば`#inlcude "..."`も記述可能です。プロジェクトの設定によってプロジェクト内の全てのファイルは`stdafx.h`をインクルードしていることになっているので各ファイルに`#include "stdafx.h"`と書く必要はありません。`#include <Siv3D.hpp>`も`stdafx.h`に記述してあるので書く必要はありません。
## コーディング規約
### 基本のデータ型
データ型は次のものを使用してください。

[1.9 基本的なデータ型](https://zenn.dev/reputeless/books/siv3d-documentation/viewer/course-quick-turorial)

この中に望みのデータ型がない場合のみ、必要なインクルードをしたりしてください。
### インクルードの書き方
例えばインクルードしたいファイルが`collab_uno/Scene/SceneDefine.h`であるとき、インクルードを記述するファイルのディレクトリに関わらず`#include "Scene/SceneDefine.h"`と記述します。同じファイルのインクルードの記述方法を１つに統一するためです。
### 命名規則
- ローカル変数：lowerCamel
- メンバ変数：m_lowerCamel
- 関数内static変数：s_lowerCamel
- 定数：SNAKE_UPPER_CASE
- 関数：UpperCamel
- クラス：UpperCamel
- Enum Class：UpperCamel
- Enum Class要素：UpperCamel
### 変数の初期化
クラス/構造体の場合`class A`の初期化は`A a(arg1, arg2);`のように`{}`ではなく`()`を用いて初期化する。

コンストラクタでのメンバ初期化子においても`{}`ではなく`()`を用いる
### クラス内容定義順番
```
class A
{
public:
  定数 or Enum Class
  コンストラクタ  // 必ずすべてのメンバ変数を初期化する
  関数
private:
  定数 or Enum Class
  関数
  メンバ変数  // ここでは初期化しない
};
```
### 構造体の定義例
```
struct A
{
// 特別な動作が必要でない限りコンストラクタは書かない
int a = 0;  // コンストラクタを書かない場合必ずここで初期化する
double b = 0.0;  // コンストラクタを書かない場合必ずここで初期化する
};
```
### 使用禁止項目
- グローバル変数
- クラスにpublicなメンバ変数
- 構造体にprivateなメンバ変数
- 構造体に関数 (コンストラクタを除く)
- Enum (代わりにEnum Classを使用する)

## 参考
- [Siv3D チュートリアル](https://zenn.dev/reputeless/books/siv3d-documentation/viewer/tutorial-basic)
