//
// Created by xh on 2020/5/15.
//
#include <stdio.h>
#include <string.h>

int main(){
    //打开文件
    FILE *file;
    file = fopen("/media/xh/VBOX HARDDISK1/myproject/helloc/main.c", "r");
    //读取单个字符
    int a = 0;
    while (1){
        a = fgetc(file);
        if (a != -1){
            printf("%c", a);
        } else{
            break;
        }
    }
    FILE *file1;
    file1 = fopen("/media/xh/VBOX HARDDISK1/myproject/helloc/main.c", "r");
    //读取到缓存里
    char buffer [10];
    while (1){
        char * c ;
        c = fgets(buffer, 10, file1);
        if (c == NULL){
            break;
        } else{
            printf("%s",buffer);
        }
    }

    fclose(file);
    fclose(file1);

    return 1;
}
