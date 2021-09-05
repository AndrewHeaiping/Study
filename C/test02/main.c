/*
 * @Author: Aiping
 * @Date: 2021-09-05 22:07:22
 * @LastEditTime: 2021-09-05 22:12:08
 * @LastEditors: Please set LastEditors
 * @Description: 在C语言中，volatile关键字可以用来提醒编译器它后面所定义的变量随时有可能改变，因此编译后的程序每次需要存储或读取这个变量的时候，都会直接从变量地址中读取数据。
 * 如果没有volatile关键字，则编译器可能优化读取和存储，可能暂时使用寄存器中的值，如果这个变量由别的程序更新了的话，将出现不一致的现象。
 * @FilePath: /Github/Study/C/test02/main.c
 */

#include <stdio.h>

int main() {
    int a = 10, b = 100, c = 0, d = 0;

    printf("%d\n", a + b);

    a = b;
    c = b;
    d = b;

    printf("%d\n", c + d);

    return 0;
}



// #include <stdio.h>

// int main() 
// {
//     volatile int a = 10, b = 100, c = 0, d = 0;

//     printf("%d\n", a + b);

//     a = b;
//     c = b;
//     d = b;

//     printf("%d\n", c + d);

//     return 0;
// }
