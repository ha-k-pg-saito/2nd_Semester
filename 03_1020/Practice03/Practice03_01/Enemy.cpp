#include "Enemyh.h"
#include<stdio.h>

Enemy::Enemy()
{
	//Enemy��p�ϐ�
	m_Routine = 0;
	printf("Enemy�̃R���X�g���N�^\n");
}

Enemy::~Enemy()
{
	printf("Enemy�̃f�X�g���N�^\n");
}

void Enemy::Exec()
{
	printf("Enemy��Exec\nn");
}

void Enemy::Draw()
{
	printf("Enemy��Draw\n");
}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("Enemy�N���X��CheckHit()\n");
	//�I�[�o�[���C�h���̊֐��������ɂ͖��m�ɐ錾���ČĂяo��
	return false;
}