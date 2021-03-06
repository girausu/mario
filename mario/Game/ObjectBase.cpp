//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/
//! @file   ObjectBase.cpp
//!
//! @brief  オブジェクト関連のソースファイル
//!
//! @date   日付		
//!
//! @author 制作者名	
//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/

#include "ObjectBase.h"
using namespace DirectX::SimpleMath;
using namespace DirectX;
using namespace std;

//----------------------------------------------------------------------
//! @brief コンストラクタ
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
ObjectBase::ObjectBase()
{
}

//----------------------------------------------------------------------
//! @brief デストラクタ
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
ObjectBase::~ObjectBase()
{

}

//----------------------------------------------------------------------
//! @brief 更新処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::Update()
{

}

//----------------------------------------------------------------------
//! @brief 描画処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::Render()
{
}

//----------------------------------------------------------------------
//! @brief 切り出して表示
//!
//! @param[in] ハンドル, 切り出した画像
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::DrawObject(Texture* tex, float pos_x, float pos_y, RECT rect)
{
	//ハンドル 座標XY 切り出す範囲, 色, ラジアン値, 回転の中心座標, 拡大倍率
	g_spriteBatch->Draw(tex->m_pTexture, Vector2(pos_x, pos_y),
		&rect, Colors::White, 0.0f, Vector2(0, 0), Vector2(1, 1));
}

//----------------------------------------------------------------------
//! @brief     座標Xの設定
//!
//! @param[in] X,Y
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::SetPos(float x, float y)
{
	m_pos_x = x;
	m_pos_y = y;
}

//----------------------------------------------------------------------
//! @brief     座標Xの設定
//!
//! @param[in] X
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::SetPosX(float x)
{
	m_pos_x = x;
}

//----------------------------------------------------------------------
//! @brief     座標Yの設定
//!
//! @param[in] Y
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::SetPosY(float y)
{
	m_pos_y = y;
}

//----------------------------------------------------------------------
//! @brief     速度Xの設定
//!
//! @param[in] X
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::SetSpdX(float x)
{
	m_spd_x = x;
}

//----------------------------------------------------------------------
//! @brief     速度Yの設定
//!
//! @param[in] Y
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::SetSpdY(float y)
{
	m_spd_y = y;
}

//----------------------------------------------------------------------
//! @brief     状態の設定
//!
//! @param[in] state
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::SetState(int state)
{
	m_state = state;
}

//----------------------------------------------------------------------
//! @brief     X座標の取得
//!
//! @param[in] なし
//!
//! @return		X
//----------------------------------------------------------------------
float ObjectBase::GetPosX()
{
	return m_pos_x;
}

//----------------------------------------------------------------------
//! @brief     Y座標の取得
//!
//! @param[in] なし
//!
//! @return	    Y
//----------------------------------------------------------------------
float ObjectBase::GetPosY()
{
	return m_pos_y;
}

//----------------------------------------------------------------------
//! @brief     速度Xの取得
//!
//! @param[in] なし
//!
//! @return		X
//----------------------------------------------------------------------
float ObjectBase::GetSpdX()
{
	return m_spd_x;
}

//----------------------------------------------------------------------
//! @brief     速度Yの取得
//!
//! @param[in] なし
//!
//! @return	    Y
//----------------------------------------------------------------------
float ObjectBase::GetSpdY()
{
	return m_spd_y;
}

//----------------------------------------------------------------------
//! @brief     高さの取得
//!
//! @param[in] なし
//!
//! @return	    高さ
//----------------------------------------------------------------------
int ObjectBase::GetGrpH()
{
	return m_grp_h;
}

//----------------------------------------------------------------------
//! @brief     幅の取得
//!
//! @param[in] なし
//!
//! @return	    幅
//----------------------------------------------------------------------
int ObjectBase::GetGrpW()
{
	return m_grp_w;
}

//----------------------------------------------------------------------
//! @brief     状態の取得
//!
//! @param[in] なし
//!
//! @return	    state
//----------------------------------------------------------------------
int ObjectBase::GetState()
{
	return m_state;
}

//----------------------------------------------------------------------
//! @brief キーボード操作で移動
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::keyMove()
{
	// 移動中の入力
	if (m_spd_x == 0 && m_spd_y == 0)
	{	//速度の設定
		if (g_key.Right)
		{
			m_spd_x = 5;
		}
		else if (g_key.Left)
		{
			m_spd_x = -5;
		}
		else if (g_key.Up)
		{
			m_spd_y = -5;
		}
		else if (g_key.Down)
		{
			m_spd_y = 5;
		}
	}
}

//----------------------------------------------------------------------
//! @brief マウス操作で移動
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void ObjectBase::mouseMove()
{
	if (g_mouse.leftButton)
	{
		m_pos_x = static_cast<float>(g_mouse.x);
		m_pos_y = static_cast<float>(g_mouse.y);
	}

	//if (g_mouse.rightButton == true)
	//{
	//	m_pos_x = g_mouse.x;
	//	m_pos_y = g_mouse.y;
	//}
}

