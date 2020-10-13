#include<stdio.h>
#include<stdlib.h>
#include<vector>        //ベクタークラスを使うためのヘッダー
#include <iostream>
#include<time.h>

int main()
{
  //vectorクラスの変数を使うときの書き方
  //std::vector<型名>変数名;
  //初期化の方法色々
  //std::vector<int>v1;             //配列の要素0
  // std::vector<int>v1 = {0,1,2};  //要素３、0,1,2で初期化
  //std::vector<int>v1{ 0,1,2 };    //要素３、0,1,2で初期化
  //std::vector<int>v1( 6, -1 );    //要素6、全て-1で初期化
    std::vector<int>v1( 8 );        //要素8、全て0で初期化
    std::vector<int>v2=v1;          //v2をv1の内容で初期化

    //値の代入、配列と同じように[]を使える
    v1[0] = 10;

    //配列のサイズ確認
    int size = v1.size();
   std::cout << size << std::endl;

 //ランダムで値を設定
   srand((unsigned)time(NULL));
   for (int i=0;i<v1.size();i++)
   {
       v1[i] = rand();
       printf("v1[%d]=%d\n", i, v1[i]);
   }
   printf("\n");

   //要素の追加  .push_back()    .insert()
   v1.push_back(10);                //末尾に要素を追加して10で初期化
   v1.insert(v1.begin()+1, 100);    //先頭から+1番目に100を追加

   for (int i = 0; i < v1.size(); i++)
   {
       printf("v1[%d]=%d\n", i, v1[i]);
   }
   printf("\n");

   //要素の削除  .pop_back()    .erase()
   v1.pop_back();       //末尾の要素削除
   v1.erase(v1.begin());

   for (int i = 0; i < v1.size(); i++)
   {
       printf("v1[%d]=%d\n", i, v1[i]);
   }

   //全要素の削除 .clear()

   v1.clear();
   printf("v1 size=%d\n", v1.size());

   //要素が0かうぃ調べるには　.empty() を使う
   if (v1.empty()==true)
   {
       printf("v1 is Empty\n");
   }
   
   //要素数を変更する   .resize()   .reserve()
   v1.resize(5);        //要素数を５に変更
   v1.resize(3);        //要素数を5>3に変更
   v1.resize(6. - 1);   //要素数を3から6に変更し、増加分を-1で初期化

   for (int i = 0; i < v1.size(); i++)
   {
       printf("v1[%d]=%d\n", i, v1[i]);
   }

   //あらかじめ最大数が分かっている場合は.reserve()で領域をかくほしておく
   v1.reserve(100);     //要素数100まではすばやく処理できる

   system("pause");
    return 0;
}

