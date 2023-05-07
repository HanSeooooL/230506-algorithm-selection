//
//  main.c
//  230506 algorithm selection
//
//  Created by 한설 on 2023/05/06.
//

#include "selection.h"

extern void TC1_Tennumber(void);
extern void TC2_Twentyonenumber(void);
extern void TC3_hundrednumber(void);
static void checktime(void(*func)(void));

int main(int argc, const char * argv[]) {
    checktime(TC1_Tennumber);
    checktime(TC2_Twentyonenumber);
    checktime(TC3_hundrednumber);
}

void checktime(void(*func)(void))
{
    clock_t start, finish;
    double duration;
    start = clock();
    (*func)();
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("\n================%lf초입니다.================\n", duration);
}
