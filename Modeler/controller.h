//=============================================================================
// ファイル: controller.h
//=============================================================================
// スライダコントローラの設定
//=============================================================================

#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

// ヘッダファイルのインクルード
#include "modelerapp.h"

// フレーム番号の最大値
extern int max_frame_count;

// コントローラ識別用の列挙子
enum CONTROLLERS {

	FRAME_CONTROLS,   // フレームコントローラ（変更しないこと)
    // ～～～列挙子を追加～～～
	X_POSITION,		//オブジェクトのX座標
	A_POSITION,
	B_POSITION,
	C_POSITION,

    NUM_CONTROLS,   // コントローラ数（必ず末尾に追加）
};

// コントローラの設定
//（NUM_CONTROLSを除くCONTROLLERS列挙子と１：１に対応付ける）
void SetController( ModelerControl* controls )
{
	// フレーム番号の制御用スライダ
    controls[FRAME_CONTROLS] = ModelerControl( "Frame Number", 0, (float)max_frame_count, 1, 0 );

    // ～～～スライダを追加～～～
	controls[X_POSITION] = ModelerControl("X-Position",-3.0,3.0,0.1,0.0);
	controls[A_POSITION] = ModelerControl("A-Position",-3.0,3.0,0.1,0.0);
	controls[B_POSITION] = ModelerControl("B-Position",-3.0,3.0,0.1,0.0);
	controls[C_POSITION] = ModelerControl("C-Position",-3.0,3.0,0.1,0.0);
}

// __CONTROLLER_H__
#endif
