#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//gcc -std=c11 -Wall -Wextra -o security security.c <- 실행 명령어

void enter() {
    sleep(0.5);
    printf("----------------------------------\n");
}

int _case(int num, int c) {
    if (c == 1) {
        if (!(num >= 1 && num <= 9)) {
            return 1;
        }
    }
    if (c == 2) {
        if (!(num >= 1 && num <= 10)) {
            return 1;
        }
    }
    if (c == 3) {
        return 0;
    }
    return 0;
}

int input(int c) {
    int num;
    while (1) {
        printf("입력 : ");
        if (scanf("%d", &num) != 1) {
        printf("정수를 입력하세요\n");
        while (getchar() != '\n');
        }
        if (_case(num, c)) {
            printf("입력이 잘못되었습니다.\n");
            continue;
        }
        return num;
    }
}

int deal_meter(char *name, long *damage, int *hp) {
    int dmg = *damage;
    if (dmg != *damage) {
        printf("%s(이)가 !@#$&@#$^의 피해를 입었습니다.\n", name);
        return 1;
    }
    printf("%s(이)가 %ld의 피해를 입었습니다.\n", name, *damage);
    *hp -= dmg;
    if(*hp < 0) {
        *hp = 0;
    }
    return 0;
    
}

void estfm(int *dmg) {
    *dmg = 1000;
}

int enemy_st_run(char name[100], char st_d[10][100], int *dmg, int *hp, char st[100], int *est) {
    int a = rand();//0~32767
    int result = 1;
    enter();
    if (st == st_d[0] || est[0] > 0) {
        if (est[0] <= 0) {
            est[0] = 3;
        }
        printf("%s(이)가 헤롱헤롱 상태에 빠졌습니다.\n", name);
        if (a % 4 == 0) {
            printf("%s(이)가 헤롱헤롱 상태로 인해 자신을 공격하였습니다.\n", name);
            printf("%s(이)가 %d의 피해를 입었습니다.\n", name, (int)(*dmg / 2));
            *hp -= (int)(*dmg / 2);
            if(*hp < 0) {
                *hp = 0;
            }
            result = 0;
        }
        enter();
    }
    if (st == st_d[1] || est[1] > 0) {
        if (est[1] <= 0) {
            est[1] = 3;
        }
        printf("%s(이)가 출혈 상태에 빠졌습니다.\n", name);
        printf("%s(이)가 출혈 상태로 인해 피해를 입었습니다.\n", name);
        printf("%s(이)가 %d의 피해를 입었습니다.\n", name, (int)(*dmg / 2));
        *hp -= (int)(*dmg / 2);
        if(*hp < 0) {
            *hp = 0;
        }
        enter();
    }
    if (st == st_d[2] || est[2] > 0) {
        if (est[2] <= 1) {
            est[2] = 2;
        }
        printf("%s(이)가 잠듦 상태에 빠졌습니다.\n", name);
        if (a % 2 == 0) {
            printf("%s(이)가 잠에서 깨어났습니다.\n", name);
            est[2] = 0;
        }
        else {
            printf("%s(이)가 잠에서 깨어나지 못하였습니다.\n", name);
            result = 0;
        }
        enter();
    }
    if (st == st_d[3] || est[3] > 0) {
        if (est[3] <= 0) {
            est[3] = 3;
        }
        printf("%s(이)가 무기력 상태에 빠졌습니다.\n", name);
        printf("%s(이)가 무기력 상태로 인해 공격력이 감소하였습니다.\n", name);
        *dmg /= 2;
        enter();
    }
    if (st == st_d[4] && est[4] > 0) {
        enter();
    }
    if (st == st_d[5] && est[5] > 0) {
        enter();
    }
    if (st == st_d[6] && est[6] > 0) {
        enter();
    }
    if (st == st_d[7] && est[7] > 0) {
        enter();
    }
    if (st == st_d[8] && est[8] > 0) {
        enter();
    }
    if (st == st_d[9] && est[9] > 0) {
        enter();
    }
    return result;
}

//{"헤롱헤롱"}, {"출혈"}, {"잠듦"}, {"무기력"}, {""}, {""}, {""}, {""}, {""}, {"데미지 선택"}
void enemy_run(char name[100], char st_d[10][100], int *dmg, int *hp, char st[100], int *est) {
    int run = enemy_st_run(name, st_d, dmg, hp, st, est);
    if (run == 1) {
        printf("%s(이)가 %d의 데미지로 공격하였습니다.\n", name, *dmg);
        *hp -= *dmg;
        if(*hp < 0) {
            *hp = 0;
        }
        return;
    }
    printf("%s(이)가 공격을 실패하였습니다.\n", name);
}

void sttr(int *est) {
    for (int i = 0; i < 10; i++) {
        if (est[i] > 0) {
            est[i]--; 
        }
        else {
            est[i] = 0;
        }
    }
}

void es(int *est) {
    if (est[0]) {

    }
    else if (est[1]) {

    }
    else if (est[2]) {

    }
    else if (est[3]) {

    }
    else if (est[4]) {

    }
    else if (est[5]) {

    }
    else if (est[6]) {

    }
    else if (est[7]) {

    }
    else if (est[8]) {

    }
    else if (est[9]) {

    }
    else {

    }
}

int skill1(char skill[10][100]) {
    int num;
    int i;
    printf("사용할 스킬을 골라주세요.\n");
    for (i = 1; i < 10; i++) {
        printf("%d-%s  ", i, skill[i - 1]);
    }
    printf("\n");
    printf("사용할 스킬의 번호를 입력해주세요\n");
    num = input(1);
    enter();
    printf("%s(을)를 사용하였습니다.\n", skill[num - 1]);
    return num -1;
}

int skill2(char skill[10][100]) {
    int num;
    int i;
    printf("사용할 스킬을 골라주세요.\n");
    for (i = 1; i < 11; i++) {
        printf("%d-%s  ", i, skill[i - 1]);
    }
    printf("\n");
    printf("사용할 스킬의 번호를 입력해주세요\n");
    num = input(2);
    enter();
    printf("%s(을)를 사용하였습니다.\n", skill[num - 1]);
    return num -1;
}


int main() {
    int hp = 10000;
    int low = 0;
    int skill_num;
    char skill[10][100] = {{"영민이의 치근거리기"}, {"지훈이의 채찍질"}, {"병서의 설교"}, {"동근이의 탯카이"}, {""}, {""}, {""}, {""}, {""}, {"동권이의 비밀수업"}};
    long damage_point[10][1] = {{2000}, {100}, {0}, {0}, {}, {}, {}, {}, {}, {0}};
    char status[10][100] = {{"헤롱헤롱"}, {"출혈"}, {"잠듦"}, {"무기력"}, {""}, {""}, {""}, {""}, {""}, {"데미지 선택"}};
    int est[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char enemy[100] = "샌즈";
    int enemy_hp = 100000;
    int enemy_dmg = 1000;
    int code = 0;
    printf("부곡.io 게임 시작합니다.\n");
    printf("??? : !@#&*의 수치를 입력하라...\n");
    while (1) {
        printf("입력 : ");
        if (scanf("%ld", damage_point[9]) != 1) {
            printf("정수를 입력하세요\n");
            while (getchar() != '\n');
        }
        break;
    }
    printf("잘 알았다.....\n");
    printf("----------------------------------\n");
    while (1) {
        printf("%s(어쩌면 가장 약한 적) (hp : %d | dmg : %d)\n", enemy, enemy_hp, enemy_dmg);
        printf("당신의 차례 (hp : %d)\n", hp);
        if (low == 1) {
            skill_num = skill2(skill);
        }
        else {
            skill_num = skill1(skill);
        }
        enter();
        code = deal_meter(enemy, damage_point[skill_num], &enemy_hp);
        if (code) {
            printf("게임이 강제로 종료되었습니다.\n");
            break;
        }
        if (enemy_hp <= 0) {
            printf("승리하셨습니다.\n");
            break;
        }
        es(est);
        enemy_run(enemy, status, &enemy_dmg, &hp, status[skill_num], est);
        if (low == 0 && hp <= 2000) {
            enter();
            printf("%s(이)가 해금되었습니다.\n", skill[9]);
            low = 1;
        }
        if (hp <= 0) {
            printf("패배하셨습니다.\n");
            break;
        }
        enter();
        estfm(&enemy_dmg);
        sttr(est);
    }
}
