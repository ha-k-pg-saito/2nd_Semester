#include"EnemyManager.h"
#include"Base.h"
#include"Enemyh.h"

//コンストラクタ
EnemyManager::EnemyManager()
{
	m_Enemies.clear();
}

//デストラクタ
EnemyManager::~EnemyManager()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//newで確保した各Enemyクラスを削除
		Base* ptr = *itr;
		delete ptr;
		ptr = nullptr;
	}
	//m_Enemiesにはnullptrが入った
	m_Enemies.clear();
}

//エネミーを生み出す
class Base* EnemyManager::CreateEnemy(int enemy_type)
{

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//可変長配列に空きがあればそこに作る
		Base* ptr = *itr;
		if (ptr == nullptr)
		{
			ptr = new Enemy();
			return ptr;
		}
	}
	//空きがないので、新規に作ってpush_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}

//エネミーを削除
bool EnemyManager::DestroyEnemy(class Base* ptr)
{
	//ptrがnullptr
	if (ptr == nullptr)
	{
		return false;
	}

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//可変長配列に空きがあればそこに作る
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

//エネミーの処理を実行する
void EnemyManager::Exec()
{
	
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//可変長配列に空きがあればそこに作る
		Base* ptr = *itr;
		if (ptr = nullptr)
		{
			ptr->Exec();
		}
	}
}
//エネミーの描画を実行する
void EnemyManager::Draw()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//可変長配列に空きがあればそこに作る
		Base* ptr = *itr;
		if (ptr = nullptr)
		{
			ptr->Draw();
		}
	}

}

//指定した矩形とEnemy1の当たり判定を取る
class Base* EnemyManager::CheckHit(int x, int y, int width, int height)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//可変長配列に空きがあればそこに作る
		Base* ptr = *itr;
		if (ptr = nullptr)
		{
			if (ptr->CheckHit(x, y, width, height))
			{
				return ptr;
			}
		}
	}
	//for文を抜けると、当たった奴がいないことになるのでnullptrを返す
	return nullptr;
}