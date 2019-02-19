#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//结构体对齐，小字节尽量放在一起，最好是在最后
struct student{
    int num;
    char name[20];
    char sex;  // 因为32位系统一次取4字节（64位为8字节），为了对齐，这里的sex占4字节
    int age;
    float score;
    char addr[30];
}stu,*pstu;

int main() {
    struct student s={1001,"liujintao",'M',24,99.5,"SiChuan"};
    struct student sarr[3];
    struct student *p;  //结构体指针
    p = &s;
    printf("%d %s %c %d %5.2f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);
    for (int i = 0; i < 3; ++i) {
        scanf("%d%s %c%d%f%s", &sarr[i].num, sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score ,sarr[i].addr);
    }
    printf("%d %s %c %d %5.2f %s\n", p->num, p->name, p->sex, p->age, p->score, p->addr);
    return 0;
}