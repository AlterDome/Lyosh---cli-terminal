

#pragma once
#include <stdio.h>

///   /home/user/.lyoshconfig.lyo
#define fileconfig  .lyoshconfig.lyo



///  /home/user/.lyoshhistory.lyo
#define filehistory  .lyoshhistory.lyo





/// Файл конфигурации терминала, сохраняем здесь в файл конфигурацию терминала
// методом выбора меню по цифрам, и сохраняем в файл конфига
// потом загружаем файл конфига с этими данными.
// с этого файла берем первоначальную загрузку - /home/user/.lyoshconfig.ly
/// --config
void configChoose() {

//int z=0; // для выбора меню в настройках

printf(" Вы в меню конфигурации Lyosh - поздравляю Вас ! \n");

printf(" 0 -  \n");
printf(" 1 -  \n");
printf(" 2 -  \n");
printf(" 3 -  \n");
printf(" 4 -  \n");
printf(" 5 -  \n");
printf(" 6 -  \n");


}



/// Загрузка конфига из папки пользователя /home/user/.lyoshconfig.lyo
void loadConfig() {


 /*      чтение из файла
    FILE *fp = fopen(filename, "r");
    if(fp)
    {
        // пока не дойдем до конца, считываем по 256 байт
        while((fgets(buffer, 5, fp))!=NULL)
        {
           if
            printf("%s", buffer);
        }
}
*/

}





/// Создание дефолтного конфига - если файла /home/user/.lyoshconfig.lyo   НЕ существует
void defaultConfig() {





}
/// Файл истории команд терминала  /home/user/.lyoshhistory.lyo
/// --history
void history() {



}

