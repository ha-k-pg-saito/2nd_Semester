
#include <iostream>

class A
{
public:
    //explicit　演算子の書き方
    //explicit　コンストラクタ(引数)
    explicit A(int val)
    {
        std::cout << val << std::endl;
    }

};

class B
{
public:
    B(const A& ref)
    {
    }
};

int main()
{
    //引数を１つだけとるコンストラクタは、暗黙の型変換が行われるかのうせいがある
    //暗黙の型変換が行われるコンストラクタのことを、変換コンストラクタという。
    B(1000);         //BクラスのコンストラクタはAのクラスの変数を受け取るのでは？
                     //暗黙的に B(A(1000))と解釈されている
    A test = 100;    //Aクラス変数にデータ型代入？
                     //暗黙的にA test =A(100)と解釈シチャッテル
                     //コピーコンストラクタが呼び出されている
    
    A(35);           //Aクラスのコンストラクタ
                     //問題なし
}

