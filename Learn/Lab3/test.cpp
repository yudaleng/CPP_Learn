#include <stdio.h>

struct birth{
    int year, month, day;
};

struct student{
    int num;
    char name[10];
    struct birth birth;
    int computer, english, math;
    double average;
};

int main(void){
    int i, n;
    struct student max, stu;
    printf("Input n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("No.%d:", i);
        scanf("%d%s%d%d%d", &stu.num, stu.name, &stu.math, &stu.english, &stu.computer);
        stu.average = (stu.math+stu.english+stu.computer) / 3.0;
        if (i == 1) {
            max = stu;
        }else if(max.average < stu.average){
            max = stu;
        }
    }

    printf("num:%d, name:%s, average:%2lf", max.num, max.name, max.average);

    return 0;
}