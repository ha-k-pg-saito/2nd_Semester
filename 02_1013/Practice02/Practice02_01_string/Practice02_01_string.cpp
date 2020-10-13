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
    std::string str = "文字列";

    //c言語の関数でstring型に入力されている文字列をつかうには
    //.c_str()という関数で、文字列のポインタを受け取る必要がある
    //printf("str=%s\n", str.c_str());

    //C++的な書き方(iostreamとstringのインクルードが必要)
    std::cout << str << std::endl;

    system("pause");
    return 0;
}

