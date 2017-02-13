//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/
//! @file   Player.h
//!
//! @brief  プレイ処理のヘッダーファイル
//!
//! @date   日付		2017/02/13
//!
//! @author 制作者名	sugiura
//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/

#include "ObjectBase.h"

#pragma once // 多重インクルードの防止

class Player : public ObjectBase
{
private:

public:
		Player();
		~Player();
		
		void Update();	//アップデート
		void Render();	//レンダー

		void keyMove();	//キーボードで移動
};

