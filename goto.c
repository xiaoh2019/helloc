//
// Created by xh on 2020/5/15.
//
#include <stdio.h>
#include <unistd.h>

int main(){

   //goto语句
    goto b;

    a:{
        printf("a");
    };

    b:{
        printf("b");
    };

    c:{
        printf("c");
    };
    sleep(1);
    //再调回到a,构成循环
    
    return 1;
}
