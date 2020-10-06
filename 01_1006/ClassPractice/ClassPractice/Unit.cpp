#include"Unit.h"
#include"Common.h"
#include"Definition.h"

//FighterƒNƒ‰ƒX

int main()
{	
	system("pause");
	return 0;
}
Unit::Unit()
{
	g_Status._hp = 0;
	g_Status._str = 0;
	g_Status._mag = 0;
	g_Status._tec = 0;
	g_Status._spd = 0;
	g_Status._def = 0;
	g_Status._luc = 0;
	g_Status._mde = 0;
}

Unit::~Unit()
{

}
void Unit::PrintStatus()
{
	printf("m_hp=%d\n", g_Status._hp);
	printf("m_str=%d\n", g_Status._str);
	printf("m_mag=%d\n", g_Status._mag);
	printf("m_tec=%d\n", g_Status._tec);
	printf("m_spd=%d\n", g_Status._spd);
	printf("m_def=%d\n", g_Status._def);
	printf("m_luc=%d\n", g_Status._luc);
	printf("m_mde=%d\n", g_Status._mde);

}
