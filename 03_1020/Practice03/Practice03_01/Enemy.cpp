#include "Enemyh.h"
#include<stdio.h>

Enemy::Enemy()
{
	//Enemy専用変数
	m_Routine = 0;
	printf("Enemyのコンストラクタ\n");
}

Enemy::~Enemy()
{
	printf("Enemyのデストラクタ\n");
}

void Enemy::Exec()
{

}

void Enemy::Draw()
{

}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("EnemyクラスのCheckHit()\n");
	//オーバーライド元の関数をつかうには明確に宣言して呼び出す
	return false;
}