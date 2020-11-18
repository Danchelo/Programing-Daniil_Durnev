int main(){

//Задача №1
//данные
const float R= 4;
const float PI= 3.14;
//решение
float AN;
float l, S, V;
l= 2*PI*R;
S= PI*R*R;
V= 1.33*PI*R*R*R;
AN= l || S || V;

//Задача №2
//число, дробная часть, целая часть
const float A= 122.270;
float INT;
INT= (int) A;
float FRA, FRA1_1;
FRA1_1= A-INT;
FRA= FRA1_1*1000;
//решение с обрезанием до 2 знака после запятой и проверкой деления на 0
float B1_1, B1_2, B;
B1_1= FRA/INT; 
B1_2= (float) B1_1*100;
B= (int) B1_2/100;

//Задача №3
//числа
int K= 7;
int M= 10;
int N= 3;
//решение
if (K>= M) K= M-1;
if (K>= N) K= N-2;
if (M<= K) M= K+1;
if (M>= N) M= N-1;
if (N<= K) N= K+1;
if (N<= M) N= K+1;

//Задача №4
//любое значение x
const float X= 0;
//решение
float Y;
while (X>=-5 && X<=-1) Y= -1/X;
while (X>=-1 && X<=1) Y= X*X;
while (X>=1 && X<=2) Y=1;

//Задача №5
//любое значение x
float X2= 3;
//решение
if (X2<0) X2= -1*X2;
float Y2;
Y2= X2-1;
if (Y2<0) Y2= -1*Y2;
return 0;
}
