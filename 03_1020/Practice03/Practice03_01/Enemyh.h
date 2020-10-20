#ifndef Enemyh_h_
#define Enemyh_h_

#include"Base.h"
class Enemy:public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();
	//引数の矩形情報と、当たり判定
	virtual bool CheckHit(int x, int y, int width, int height);

private:
	//Enemy専用変数
	int m_Routine;		//行動ルーチン管理変数
};


#endif

