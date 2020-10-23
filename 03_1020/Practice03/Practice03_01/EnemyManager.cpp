#include"EnemyManager.h"
#include"Base.h"
#include"Enemyh.h"

//�R���X�g���N�^
EnemyManager::EnemyManager()
{
	m_Enemies.clear();
}

//�f�X�g���N�^
EnemyManager::~EnemyManager()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//new�Ŋm�ۂ����eEnemy�N���X���폜
		Base* ptr = *itr;
		delete ptr;
		ptr = nullptr;
	}
	//m_Enemies�ɂ�nullptr��������
	m_Enemies.clear();
}

//�G�l�~�[�𐶂ݏo��
class Base* EnemyManager::CreateEnemy(int enemy_type)
{

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//�ϒ��z��ɋ󂫂�����΂����ɍ��
		Base* ptr = *itr;
		if (ptr == nullptr)
		{
			ptr = new Enemy();
			return ptr;
		}
	}
	//�󂫂��Ȃ��̂ŁA�V�K�ɍ����push_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}

//�G�l�~�[���폜
bool EnemyManager::DestroyEnemy(class Base* ptr)
{
	//ptr��nullptr
	if (ptr == nullptr)
	{
		return false;
	}

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//�ϒ��z��ɋ󂫂�����΂����ɍ��
		Base* tmp = *itr;
		if (tmp == ptr)
		{
			delete tmp;
			tmp = nullptr;
			return true;
		}
	}
	return false;
}

//�G�l�~�[�̏��������s����
void EnemyManager::Exec()
{
	
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//�ϒ��z��ɋ󂫂�����΂����ɍ��
		Base* ptr = *itr;
		if (ptr = nullptr)
		{
			ptr->Exec();
		}
	}
}
//�G�l�~�[�̕`������s����
void EnemyManager::Draw()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//�ϒ��z��ɋ󂫂�����΂����ɍ��
		Base* ptr = *itr;
		if (ptr = nullptr)
		{
			ptr->Draw();
		}
	}

}

//�w�肵����`��Enemy1�̓����蔻������
class Base* EnemyManager::CheckHit(int x, int y, int width, int height)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//�ϒ��z��ɋ󂫂�����΂����ɍ��
		Base* ptr = *itr;
		if (ptr = nullptr)
		{
			if (ptr->CheckHit(x, y, width, height))
			{
				return ptr;
			}
		}
	}
	//for���𔲂���ƁA���������z�����Ȃ����ƂɂȂ�̂�nullptr��Ԃ�
	return nullptr;
}