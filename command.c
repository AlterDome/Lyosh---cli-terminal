
//#pragma once
#include <stdio.h>
#include <string.h>
///  #include "command.c"  // описание коммандного процессора а-ля Bash итд

/// --lyo
int command() {
char c;
char  cc[100];
char  zz[100];
int z=0;

int result=0;

printf(" Запуск системы обработки комманд  lyosh \n");

while((c=getc(stdin)) != '\n')
{
printf("%c",c);
cc[100] = c;


}

zz[100] = 'l','o','p';

if (result = strcmp( cc[100], zz[100] ) )
{
    printf("Strings are equal \n");
}
    else
{
   printf("Strings are not equal \n");
}



return 0;
}
