#ifndef   Unit_h_
#define   Unit_h_

#include"Definition.h"

class Unit
{
public:
	//コンストラクタ
	Unit();
	//デストラクタ
	~Unit();
	//ステータス表示
	void PrintStatus();

private:
	Status g_Status;
		/*int m_hp;
		int m_str;
		int m_mag;
		int m_tec;
		int m_spd;
		int m_def;
		int m_luc;
		int m_mde;
	*/
};





#endif
