<h1>Домашняя работа к лабораторной №8</h1>
<h2>Выполнил: Кравченко А.С.</h2>

<h1>Вариант 14</h1>
<h2>Условие задачи</h2>
Вычислите с использованием цикла for значение: sin1 + sin1.1 + sin1.2 + .. + sin2

<h2>Алгоритм</h2>
1. Начало.<br>
2. Инициализируем переменные x, s, i и вводим их значение с клавиатуры.<br>
3. s = 0; i = 1.<br>
4. Если i <= x:<br>
  - s += sin(i)<br>
  - i += 0.1<br>
  Иначе: выводим s.<br>
5. Конец.<br>

<h2>Код программы</h2>
#define _CRT_SECURE_NO_DEPRECATE<br> 
#include <stdio.h><br>
#include <locale.h><br>
#define _USE_MATH_DEFINES<br> 
#include <math.h><br>
void main()<br>
{<br>
    setlocale(LC_ALL, "RUS");<br>
	double x, s;<br>
	s = 0;<br>
	puts("введите число:");<br>
	scanf("%lf", &x);<br>
	for (double i = 1; i <= x; i += 0.1)<br>
		s += sin(i);<br>
	printf("s = %lf", s);<br>
}<br>

<h2>Схема</h2>
<img width="687" height="1002" alt="image" src="https://github.com/user-attachments/assets/56d14329-05d2-4815-81ba-8f20069bbb02" />

<h2>Консоль</h2>
<img width="425" height="135" alt="2025-10-20_15-49-06" src="https://github.com/user-attachments/assets/025f2ca3-7fb7-420d-bea7-7c44472ec805" />



  
