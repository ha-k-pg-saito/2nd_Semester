#ifndef   Unit_h_
#define   Unit_h_



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
	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;

	
};

Unit::Unit()
{
	m_hp = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_luc = 0;
	m_mde = 0;
}

Unit::~Unit()
{

}



#endif
