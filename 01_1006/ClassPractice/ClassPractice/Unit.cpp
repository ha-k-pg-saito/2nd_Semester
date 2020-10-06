#include"Unit.h"
#include"Common.h"
#include"Definition.h"

//FighterƒNƒ‰ƒX

int main()
{	
	Unit g_Unit;
	g_Unit.PrintStatus();
	
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
	printf("g_Status._hp=%d\n", g_Status._hp);
	printf("g_Status._str=%d\n", g_Status._str);
	printf("g_Status._mag=%d\n", g_Status._mag);
	printf("g_Status._tec=%d\n", g_Status._tec);
	printf("g_Status._spd=%d\n", g_Status._spd);
	printf("g_Status._def=%d\n", g_Status._def);
	printf("g_Status._luc=%d\n", g_Status._luc);
	printf("g_Status._mde=%d\n", g_Status._mde);

}
