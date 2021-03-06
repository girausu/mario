//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/
//! @file   Player.cpp
//!
//! @brief  プレイヤー処理のソースファイル
//!
//! @date   日付		2017/02/13
//!
//! @author 制作者名	sugiura
//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/

// ヘッダファイルの読み込み ================================================
#include "Player.h"

//----------------------------------------------------------------------
//! @brief コンストラクタ
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
Player::Player()
{
	m_handle = new Texture(L"Resources\\Images\\PongImage.png");
	m_grp_x = 0;
	m_grp_y = 0;
	m_grp_w = 32;
	m_grp_h = 32;
	m_pos_x = 320;
	m_pos_y = 240;
	m_spd_x = 0;
	m_spd_y = 0;
	m_state = 1;
	m_rect = { m_grp_x, m_grp_y, m_grp_w, m_grp_h };
}



//----------------------------------------------------------------------
//! @brief デストラクタ
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
Player::~Player()
{
}

//----------------------------------------------------------------------
//! @brief 更新処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void Player::Update()
{
	//速度の初期化
	m_spd_x = 0;
	m_spd_y = 0;

	//キーボードで操作
	keyMove();

	//移動
	m_pos_x += m_spd_x;
	m_pos_y += m_spd_y;
}

//----------------------------------------------------------------------
//! @brief 描画処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void Player::Render()
{
	DrawObject(m_handle, m_pos_x, m_pos_y, m_rect);
}

//----------------------------------------------------------------------
//! @brief キーボードで移動
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void Player::keyMove()
{
	if (m_spd_x == 0 && m_spd_y == 0)
	{	//上
		if (g_key.Up)
		{
			m_spd_y = -5;
		}
		//下
		else if (g_key.Down)
		{
			m_spd_y = 5;
		}
		//右
		else if (g_key.Right)
		{
			m_spd_x = 5;
		}
		//左
		else if (g_key.Left)
		{
			m_spd_x = -5;
		}
	}
}
