/** 
* @file main.c
* @brief Файл где находится вся программа
* @author Daniil Durnev
* @date 02-mar-2020
* @version 1.0 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/** Главная функция
*
* Последовательность действий:
* 1. Объявлены константа и переменные
* 2. Созданы массивы TEXT1, TEXT2 и SYM
* 3. С помощью функции fgets заполнен массив
* @param TEXT1 - текст который пользователь вводит
* 4. Создан цикл который считает количество слов с одинаковыми буквами в начале и конце слова
*
* @return 0 - успешный код возвращения с программы */

int main() {
const int N = 100;
int ANS = 0;
char *TEXT1 = (char*) malloc ( N * sizeof(char));
char SYM[2] = { ',' , ' ' };
FILE *FILE = fopen ("/home/osboxes/Programing-Daniil_Durnev/lab14/src/text", "w");
if ((FILE = fopen ("/home/osboxes/Programing-Daniil_Durnev/lab14/src/text", "w")) == NULL) {
    printf ("Не удается открыть файл. \n");
    exit(1);
}
fprintf (FILE, "сar, anna, bomb");
fclose(FILE);
FILE = fopen ("/home/osboxes/Programing-Daniil_Durnev/lab14/src/text", "r");
fgets (TEXT1, N, FILE);
fclose(FILE);
for (char *TEXT2 = strtok( TEXT1, SYM); TEXT2 != NULL; TEXT2 = strtok( NULL, SYM)){
if (*TEXT2 == *(TEXT2+strlen(TEXT2)-1)) ANS++ ;
}
FILE = fopen ("/home/osboxes/Programing-Daniil_Durnev/lab14/src/text", "w");
fprintf (FILE, "Количество слов с одинаковыми буквами в начале и конце: %d", ANS);
fclose (FILE);
free(TEXT1);
return 0;
}
