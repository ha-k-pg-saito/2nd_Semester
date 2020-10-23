
#ifndef  EnemyManager_h_
#define  EnemyManager_h_
#include<vector>


//�G�l�~�[�Ǘ��N���X
class EnemyManager
{
public:
	EnemyManager();		//�R���X�g���N�^
	~EnemyManager();	//�f�X�g���N�^

public:
	//�G�l�~�[�𐶂ݏo��
	class Base* CreateEnemy(int enemy_type);
	//�G�l�~�[���폜
	bool DestroyEnemy(class Base* ptr);
	//�G�l�~�[�̏��������s����
	void Exec();
	//�G�l�~�[�̕`������s����
	void Draw();
	//�w�肵����`��Enemy1�̓����蔻������
	class Base* CheckHit(int x, int y, int width, int height);
	
private:
	//�쐬�����G�l�~�[���Ǘ�����
	std::vector<class Base*>m_Enemies;


};

#endif