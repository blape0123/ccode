#include <stdio.h> 

typedef struct student {
    char name[20];
    int age;
    int score;
}t_student;

void sp(t_student *p) {
    p->score = 999;
}

void ss(t_student p) {
    p.score = 999;
} 

int main() {
    t_student class[3] = {
        {"Kim", 20, 95}, {"Lee", 21, 88}, {"Park", 22, 77}
    };
    printf("김씨의 점수 : %d\n", class[0].score);
    ss(class[0]);
    printf("김씨의 점수 : %d\n", class[0].score);
    sp(&class[0]);
    printf("김씨의 점수 : %d\n", class[0].score);
}