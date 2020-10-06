#include"Unit.h"
#include"Common.h"

//FighterƒNƒ‰ƒX

int main()
{
	Unit unit;
	
	system("pause");
	return 0;
}
void Unit::PrintStatus()
{
	printf("m_hp=%d\n", m_hp);
	printf("m_str=%d\n", m_str);
	printf("m_mag=%d\n", m_mag);
	printf("m_tec=%d\n", m_tec);
	printf("m_spd=%d\n", m_spd);
	printf("m_def=%d\n", m_def);
	printf("m_luc=%d\n", m_luc);
	printf("m_mde=%d\n", m_mde);

}
