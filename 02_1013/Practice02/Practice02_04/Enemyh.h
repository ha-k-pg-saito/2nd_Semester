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

	//Enemy専用変数
	int m_Routine;		//行動ルーチン管理変数
};


#endif

