#include "Enemyh.h"
#include<stdio.h>

Enemy::Enemy()
{
	//Enemy��p�ϐ�
	m_Routine = 0;
}

Enemy::~Enemy()
{

}

void Enemy::Exec()
{

}

void Enemy::Draw()
{

}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("Enemy�N���X��CheckHit()\n");
	//�I�[�o�[���C�h���̊֐��������ɂ͖��m�ɐ錾���ČĂяo��
	return false;
}