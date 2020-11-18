int main() {

// Задача №1
// сопротивления резисторов
const float R1= 2;
const float R2= 3;
const float R3= 6;
// Rs- вспомогательное значение
float Rs, R1_1, R2_2, R3_3;
R1_1= 1/R1;
R2_2= 1/R2;
R3_3= 1/R3;
Rs= R1_1 + R2_2 + R3_3;
// R- общее сопротивление
float R;
R= 1/Rs;

// Задача №2
const int NUM= 123;
// получаем числа 1 2 3 по отдельности
int NUM1_1, NUM1, NUM2, NUM3;
NUM1_1= NUM%1000/100;
NUM2= NUM%100/10;
NUM3= NUM%10;
// вспомогательные числа
NUM1= NUM3*100;
NUM2= NUM2*10;
NUM3= NUM1_1;
// ответ
int NUMR;
NUMR= NUM1+NUM2+NUM3;

// Задача №3
const int a= 2;
int a2, a4, a6, a8;
// a в 4 степени за 2 операции
a4= a*a;
a4=a4*a4;
// а в 6 степени за 3 операции
a2= a*a;
a6= a2*a2;
a6= a6*a2;
// a в 8 степени за 3 операции
a8= a*a;
a8= a8*a8;
a8= a8*a8;
// a в 10 степени за 4 операции
int a10;
a2= a*a;
a10= a2*a2;
a10= a10*a10;
a10= a10*a2;

// Задача №4
// число в восьмеричной СИ и его цифры по отдельности
const int NUM8= 2736;
int NUM8_1, NUM8_2, NUM8_3, NUM8_4, NUM10;
NUM8_1= NUM8%10000/1000*8*8*8;
NUM8_2= NUM8%1000/100*8*8;
NUM8_3= NUM8%100/10*8;
NUM8_4= NUM8%10;
// это же число в десятичной СИ
NUM10= NUM8_1+NUM8_2+NUM8_3+NUM8_4;

// Задача №5
// число и его цифры по отдельности
const int NUM5= 492;
int NUM5_1, NUM5_3;
NUM5_1= NUM5%1000/100;
NUM5_3= NUM5%10;
// ответ
int NUMA;
NUMA=NUM5_1/NUM5_3;

// Задача №6
// задаем диапазон чисел
const int NUM6_1= 10;
const int NUM6_2= 15;
int NUM6= 1;
int i;
// решение
for ( i=NUM6_1; i<=NUM6_2; i++){ NUM6 *= i ;}
return 0;
}
