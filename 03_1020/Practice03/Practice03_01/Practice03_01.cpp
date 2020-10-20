#include<stdio.h>
#include<stdlib.h>
#include"Enemyh.h"
#include"Player.h"


int main()
{
    Player player;
    player.SetMoveSpeed(5.0f);
    player.SetHp(5);

    Enemy enemy;
    enemy.SetHp(100);

    printf("-------------\n");
    printf("PRACTICE03_01\n");
    printf("-------------\n");

    printf("Player Status\n");
    printf("hp       =%d\n",    player.GetHp());
    printf("PosX     =%0.2f\n", player.GetPosX());
    printf("PosY     =%0.2f\n", player.GetPosY());
    printf("MoveSpeed=%0.2f\n", player.GetMoveSpeed());
    printf("\n");

    if (player.CheckHit(10, 10, 20, 30) == false)
    {
        printf("当たっていません\n");
    }
    if (enemy.CheckHit(10, 10, 20, 30) == false)
    {
        printf("当たっていません\n");
    }

    printf("Enemy Status\n");
    printf("hp       =%d\n",    enemy.GetHp());
    printf("PosX     =%0.2f\n", enemy.GetPosX());
    printf("PosY     =%0.2f\n", enemy.GetPosY());
    printf("MoveSpeed=%0.2f\n", enemy.GetMoveSpeed());
    printf("\n");

    system("pause");
    return 0;
}


