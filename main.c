

/*
Author: Rybochkin Aleksei

This program is terminal Lyosh

Расширение файлов - .lyo

1- Создать терминал

2- Сделать встроенный редактор файлов наподобие nano  (можно без псевдографики) в - editor.c

3- Добавить больше консольных игр в файл - games.c -

4- Подготовить обработчик пакетных файлов а-ля Bash файл...  в - command.c

5- Подготовить встроенную make систему на основе lyo файлов пакетных...  в -  maker.c

6- Сделать встроенный вывод конфигов системы - описать их в  - config.c -

7-


*/


/*
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
*/


#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h> // for fork

#include "games.c"    // описания игр встроенных
#include "config.c"   // конфигурация терминала и вывод на экран и конф-я ОС
#include "editor.c"   // описание встроенного редактора текстовых файлов
#include "command.c"  // описание коммандного процессора а-ля Bash итд
#include "maker.c"    // описание и работа make системы

#define s 100


///*//////////////////////////////////////////////////////////////////////////////////
/// Глобальные переменные и файлы для работ


char cmd[s]; /// Для ввода команды в консоль


///*//////////////////////////////////////////////////////////////////////////////////
/// Стартовое окно
char Start() {

printf("\n     Lyosh starting ... \n \n");
return 0;
}


/// Для вывода времени
int Timer() {
time_t rawtime;
struct tm * timeinfo;
time ( &rawtime );
timeinfo = localtime ( &rawtime );
printf ("%s", asctime (timeinfo) );
return 0;
}


/// Для получения пользователя, хоста, директории
int Path() {
char dir[s]; // Для получения директории
char hostname[s]; // Для получения названия хоста
char login[s]; // Для получения логина пользователя
getcwd(dir, s);
gethostname(hostname, s);
getlogin_r(login, s);
printf("%s : %s : %s \n", login, hostname, dir);
return 0;
}


/// последняя функция перед закрытием
int End() {
char login[s];
getlogin_r(login, s);
printf("\n Good bye %s \n", login);
Timer();
return 0;
}


/// Вывод справки по встроенным командам
int Help() {
printf("  This is Lyosh terminal \n");

printf("  --config  - для работы с файлом конфигурации \n");

printf("  --history  - для работы с файлом истории команд \n");

printf("  --lyo   - для обработки команд из пакетного файла \n"); /// в теории...

return 0;
}


/// Главный обработчик комманд   *****************************
int Loop() {



printf(">");
/// берем функцию обрабоки комманд отсюда  command.c  -  int command()
command();




return 0;
}



///*//////////////////////////////////////////////////////////////////////////////////////////
/// Главная функция
int main(int argc, char *argv[])
{


Start();
Timer();
Path();
Loop();  // главный обработчик комманд с клавиатуры



End();
return 0;
}
///*/////////////////////////////////////////////////////////////////////////////////////////
