#include <stdio.h>

//gcc -std=c11 -Wall -Wextra -o security security.c

void enter() {
    printf("----------------------------------\n");
}



int input() {
    int num;
    while (1) {
        printf("입력 : ");
        scanf("%d", &num);
        if (!(num >= 1 && num <= 10)) { //조건에 따라 바뀌는 범위 구현하기
            printf("\n입력이 잘못되었습니다.\n");
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

void enemy_run(char name[100], char st_d[10][100], int *dmg, int *hp, char st[100]) {
    if (st == st_d[1]) {

    }
    printf("%s(이)가 %d의 데미지로 공격하였습니다.\n", name, *dmg);
    *hp -= *dmg;
    if(*hp < 0) {
        *hp = 0;
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
    printf("사용할 스킬의 번호를 입력해주세요/n");
    num = input();
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
    printf("사용할 스킬의 번호를 입력해주세요/n");
    num = input();
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
    char status[10][100] = {{"헤롱헤롱"}, {"흑인의 저주"}, {"잠듦"}, {"무기력"}, {""}, {""}, {""}, {""}, {""}, {"데미지 선택"}};
    char enemy[100] = "샌즈";
    int enemy_hp = 100000;
    int enemy_dmg = 1000;
    int code = 0;
    printf("부곡.io 게임 시작합니다.\n");
    printf("??? : !@#&*의 수치를 입력하라...\n입력 : ");
    scanf("%ld", damage_point[9]);
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
        if (enemy_hp < 0) {
            printf("승리하셨습니다.\n");
        }
        enemy_run(enemy, status, &enemy_dmg, &hp, status[skill_num]);
        if (low == 0 && hp <= 2000) {
            enter();
            printf("%s(이)가 해금되었습니다.\n", skill[9]);
            low = 1;
        }
        if (hp < 0) {
            printf("패배하셨습니다.\n");
        }
        enter();
    }
}
