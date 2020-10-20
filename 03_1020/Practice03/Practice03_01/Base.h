#ifndef Base_h_
#define Base_h_

class Base
{
public:
	Base();
   virtual ~Base();


public:
	//継承先で、それぞれ処理のちがうことがわかっている関数を
	//純粋仮想関数として基底クラスに宣言
	virtual void Exec() = 0;
	virtual void Draw() = 0;

public:
	//引数の矩形情報と、当たり判定
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