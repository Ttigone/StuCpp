#include <stdio.h>
#include <stdlib.h>
int main()
{
    char choice[2][100];
    char * p = choice[0];
    // p = "选项0";
    char * p2 = choice[1];
    // choice[1] = "选项1";
    printf("%d\n", choice);
    printf("%d\n", &choice[0]);
    printf("%d\n", &choice[0][0]);
    printf("%d\n", choice + 1);
    printf("%d\n", choice[1]);
    printf("%d\n%d\n", p, p2);
    // choice++;
    choice[1]++;
    // 3++;
    // choice[1][1]++;

    
    // printf("%5d\n", p);
    // p++;
    // choice[0]++;
    // char a[2];
    // // a++;
    // char *p = a;
    // p = "使得";
    // printf("%s", a);
    system("pause");
    return 0;
}