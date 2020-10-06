#include<stdio.h>
#include<stdlib.h>

//Fighterクラス
class Fighter
{

public:

	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luck;
	int m_mde;

	//コンストラクタ
	Fighter();
	//デストラクタ
	~Fighter();
};

Fighter::Fighter()
{

}

Fighter::~Fighter()
{

}
int main()
{

	system("pause");
	return 0;
}
