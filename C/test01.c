#include <stdio.h>
#include <string.h>
struct myCat{
   char name[20];
   int age;
   int weight;
};

/* 
TODO: implement 
*/



/**
 * @description: 
 * @param {int} a
 * @param {int} b
 * @return {*}
 */
void func(int a,int b){
   printf("");
}

int main(int argc,char *argv[])  //char **argv
{   
   //struct myCat cat={"八月",5,900};
   struct myCat cat;
   strcpy(cat.name,"八月");
   cat.age = 10;
   cat.weight =1000;
   printf("name:%s,age:%d,weight:%d\n",cat.name,cat.age,cat.weight);
   return 0;
}

