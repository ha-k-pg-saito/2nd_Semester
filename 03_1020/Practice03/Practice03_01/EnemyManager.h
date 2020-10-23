
#ifndef  EnemyManager_h_
#define  EnemyManager_h_
#include<vector>


//エネミー管理クラス
class EnemyManager
{
public:
	EnemyManager();		//コンストラクタ
	~EnemyManager();	//デストラクタ

public:
	//エネミーを生み出す
	class Base* CreateEnemy(int enemy_type);
	//エネミーを削除
	bool DestroyEnemy(class Base* ptr);
	//エネミーの処理を実行する
	void Exec();
	//エネミーの描画を実行する
	void Draw();
	//指定した矩形とEnemy1の当たり判定を取る
	class Base* CheckHit(int x, int y, int width, int height);
	
private:
	//作成したエネミーを管理する
	std::vector<class Base*>m_Enemies;


};

#endif