#include<stdlib.h>
#include<stdio.h>
#include<string>    //string使うためのヘッダー
#include<iostream>  //C++で拡張された入出力用のヘッダー

int main()
{
    char word = 'a';
    char name[] = "saito soma";         
    const char* cstr = "Hello World";    //const char ポインタ型

    //上記の３つの文字、文字列をprintfで画面に出力
    printf("%c\n",word);
    printf("%s\n",name);
    printf("%s\n",cstr);

   //string型の使い方
   //std::string str = "文字列"; 
   //std::string str;            //""(からっぽ)
   //std::string str = "";       //""(からっぽ)
   // std::string str = "ABC";   //"ABC"
   //std::string str("ABC");     //"ABC"
    std::string str2(3,'A');     //"AAA"
    std::string str = str2;      //"AAA"

    //c言語の関数でstring型に入力されている文字列をつかうには
    //.c_str()という関数で、文字列のポインタを受け取る必要がある
    //printf("str=%s\n", str.c_str());

    //C++的な書き方(iostreamとstringのインクルードが必要)
    std::cout << str << std::endl;

    //文字サイズを取得  .size() or  .length()
    std::cout << "str size=" << str.size() << std::endl;

    //文字の挿入 +=,push_back(),append(),insert()
    str += "BBC";
    str.push_back('D');
    str.append("EE");
    str.insert(1,"FG");
    std::cout << str << std::endl;

    //文字の検索 .find() 
    str = "ABC ABC";
    int index = str.find('C');        //2
    index     = str.find("BC");       //1
    index     = str.find("BC", 2);    //5 指定の位置(2)から文字列を探す
    index     = str.find("Z");        //-1だが　std::string::npos;を使って判定する
    //ほかにも
    //.rfind()後ろから検索
    //.find_first_of()  指定文字を先頭から検索
    //.find_last_of()  指定文字を最後から検索
    //.find_first_not_of()  指定文字でない文字を最初から検索
    //.find_last_not_of()  指定文字でない文字を最後から検索
           
    //文字の置き換え   .replace(何文字目、何文字分、置き換え文字列)
    std::string from = "BC";
    std::string to = "X";
    str.replace(str.find(from), from.size(), to);
    std::cout << str << std::endl;

    //文字の削除.clear()
    str.clear();
    std::cout << str << std::endl;

    system("pause");
    return 0;
}

