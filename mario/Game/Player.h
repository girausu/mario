//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/
//! @file   Player.h
//!
//! @brief  �v���C�����̃w�b�_�[�t�@�C��
//!
//! @date   ���t		2017/02/13
//!
//! @author ����Җ�	sugiura
//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/

#include "ObjectBase.h"

#pragma once // ���d�C���N���[�h�̖h�~

class Player : public ObjectBase
{
private:

public:
		Player();
		~Player();
		
		void Update();	//�A�b�v�f�[�g
		void Render();	//�����_�[

		void keyMove();	//�L�[�{�[�h�ňړ�
};

