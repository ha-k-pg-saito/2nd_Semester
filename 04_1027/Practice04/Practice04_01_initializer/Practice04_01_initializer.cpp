

#include <iostream>

class CharBase
{
public:
    CharBase();
    ~CharBase();

    void PrintParam();

private:
    int Hp;
    int Mp;


    const int HP_MAX;
};

//コンストラクタでメンバイニシャライズによる初期化のやり方
//クラス名::コンストラクタ（引数）:メンバ変数（初期値）:メンバ変数（初期値）

CharBase::CharBase() :Hp(100), Mp(10),HP_MAX(999)   //constメンバ変数もここでなら初期化できる
{
    //従来の方法
    //Hp = 10;
    //Mp = 10;
    //HP_MAX=999;       //コンストラクタ内ではconst型のメンバ変数を初期化できない
}

CharBase::~CharBase()
{

}

void CharBase::PrintParam()
{
    printf("Hp=%d\n",Hp);
    printf("Mp=%d\n",Mp);
    printf("\n");
    printf("HP_MAX=%d\n",HP_MAX);
}

int main()
{
    //データ型にもコンストラクタはある
    int value(10);
    float f_value(10.0f);

    CharBase ch;
    ch.PrintParam();
    
}
