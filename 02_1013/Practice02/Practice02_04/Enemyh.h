#ifndef Enemyh_h_
#define Enemyh_h_

#include"../Practice02_05/Base.h"

class Enemy:public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

	//Enemy��p�ϐ�
	int m_Routine;		//�s�����[�`���Ǘ��ϐ�
};


#endif

