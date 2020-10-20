#ifndef Base_h_
#define Base_h_

class Base
{
public:
	Base();
    ~Base();

public:
	//ˆø”‚Ì‹éŒ`î•ñ‚ÆA“–‚½‚è”»’è
	virtual bool CheckHit(int x,int y,int width, int height);

public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);
	void SetSize(int width,int height);

	int   GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();
	int   GetWidth();
	int   GetHeight();

private:
	int   m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;

	int m_Width;
	int m_Height;
};


#endif