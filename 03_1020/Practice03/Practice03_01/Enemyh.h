#ifndef Enemyh_h_
#define Enemyh_h_

#include"Base.h"
class Enemy
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;

	//Enemy��p�ϐ�
	int m_Routine;		//�s�����[�`���Ǘ��ϐ�
};


#endif

