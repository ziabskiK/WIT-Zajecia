#include<stdio.h>
#include<stdlib.h>
/*********************************************************************/
/*********************************************************************/
typedef void (*ptrMyText)();
/*********************************************************************/
/*********************************************************************/
void MyTextAll();
void MyText01();
void MyText02();
/*********************************************************************/
/*********************************************************************/
void MyTextAll(){
    printf("**************> MyTextAll <**************\n");
    MyText01();
    MyText02();
    printf("*****************************************\n");
    }
/*********************************************************************/
void MyText01(){
    printf("********> MyText01\n");
    }
/*********************************************************************/
void MyText02(){
    printf("########> MyText02\n");
    }
/*********************************************************************/
/*********************************************************************/
int main(){
    ptrMyText myF;

    myF = MyText01;
    myF();
    printf("MyText01 -----> %d\t myF -----> %d\n", (int)MyText01, myF);
    myF = MyText02;
    myF();
    printf("MyText02 -----> %d\t myF -----> %d\n", (int)MyText02, myF);
    myF = MyTextAll;
    myF();
    printf("MyTextAll ----> %d\t myF -----> %d\n", (int)MyTextAll, myF);

    return 0;
    }










