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
	//�����̋�`���ƁA�����蔻��
	virtual bool CheckHit(int x, int y, int width, int height);

private:
	//Enemy��p�ϐ�
	int m_Routine;		//�s�����[�`���Ǘ��ϐ�
};


#endif

