#include <string.h>
int main(){

//Задача №7
//В ТЕКСТ пишем любое слово или предложение
char TEXT[] = "Programming";
//Вспомогательные переменные
int i;
char c;
int ANS = 0;
//Решение
for ( i= 0; i< strlen(TEXT); i++) {
c= TEXT[i];
if (c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u' || c == 'y' ||
     c == 'A' || c == 'E' || c =='I' || c == 'O' || c == 'U' || c == 'Y')
ANS++ ;}
//Ответ в ANS
return 0;}

