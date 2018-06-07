#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL));

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int n = 0;

start:
	printf("Введите номер задания:\t");
	scanf("%d", &n);

	switch (n)
	{

	case 1:

	{
		printf("1.	Ввести с клавиатуры два числа. Определить, что больше, разность квадратов или модуль квадрата разности этих чисел. Ответ вывести в виде сообщения\n");

		int a = 0, b = 0;

		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;

		printf("\n a = %d, b = %d\n", a, b);

		if ((pow(a, 2) - pow(b, 2)) > log(pow(a, 2) - pow(b, 2)))
		{
			printf("разность квадратов больше \n");
		}

		else
		{
			printf("модуль квадрата разности этих чисел больше \n");
		}
	}
	break;

	case 2:
	{
		printf("2.	Ввести с клавиатуры географическую долготу и широту места и определить, в каком полушарии оно находится (в восточном или западном).\n");
		float d = 0, s = 0;

		printf("Введите широту\n");
		scanf("%f", &s);

		printf("Введите долготу\n");
		scanf("%f", &d);

		if (d > 0 && s > 0)
		{
			SetConsoleTextAttribute(hConsole, 4);
			printf("Восточная долгота и южная широта\n");
			SetConsoleTextAttribute(hConsole, 15);

		}

		else if (d > 0 && s < 0)
		{
			SetConsoleTextAttribute(hConsole, 1);
			printf("Восточная долгота и северная широта\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		else if (d < 0 && s>0)
		{
			SetConsoleTextAttribute(hConsole, 9);
			printf("Западная долгота и южная широта\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		else if (d < 0 && s < 0)
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("Западная долгота и северная широта\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

	}

	break;

	case 3:
	{
		printf("1.	Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям предоставляется 20% скидка. Ввести продолжительность разговора и день недели (цифра от 1 до 7).\n");

		int  day = 0;
		float call = 0, cost = 22.3, total = 0;

		printf("\t Введите день недели (1-7) = ");
		scanf("%d", &day);

		printf("\t Введите продолжительность в минутах= ");
		scanf("%f", &call);

		printf("\t ------------------------------------\n");
		/*printf("Введите стоимость переговоров = \t");
		scanf("%d", &cost);
*/
		switch (day)
		{

		case 6:
		case 7:
		{
			SetConsoleTextAttribute(hConsole, 12);

			total = (cost - (cost*0.2))*call;

			//printf("\t --------------\n");

			printf("\t скидка в праздничные дни %d\n", 20);
			printf("\t итого со скидкой = %f\n", total);
			//printf("\t --------------\n");
			SetConsoleTextAttribute(hConsole, 15);

			//printf("\t Итого стоимость разговора по субботам и воскресеньям = %f\n", total);
		}

		break;
		default:
		{
			total = (cost)*call;

			SetConsoleTextAttribute(hConsole, 4);
			printf("\t итого со скидкой = %f\n", total);
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		}

		printf("\t ------------------------------------\n");


		//call = 1 + rand() % 50;
		//day = 1 + rand() % 7;

		//printf("\n call lenght = %d, day of week = %d\n", call, day);

		/*if (day == 6 && day == 7)
		{
			total = (cost - (cost*0.2))*call;

			printf("Итого стоимость разговора = %d\n", total);
		}

		else
		{
			total = (cost )*call;

			printf("Итого стоимость разговора = %d\n", total);
		}*/
	}

	break;

	case 4:
	{
		printf("2.	Вычислить стоимость покупки с учетом скидки. Скидка 5% предоставляется, если сумма покупки превышает 500 тенге и 10%, если больше 1000 тенге.\n");

		int n = 0, cost = 0, total;

		printf("Введите количество покупок = \t");
		scanf("%d", &n);

		printf("Введите цену за покупку = \t");
		scanf("%d", &cost);

		if ((n*cost) > 500 && (n*cost) < 1000)
		{
			total = (n*cost) - ((n*cost)*0.05);
			printf("Сумма превышет 500 KZT скидка 5 %% и общая стоимость =  %d\n", total);

		}

		else if ((n*cost) > 1000)
		{
			total = (n*cost) - ((n*cost)*0.1);
			printf("Сумма превышет 1000 KZT скидка 10 %% и общая стоимость =  %d\n", total);

		}

		else
		{
			total = (n*cost);
			printf("Нет скидок и общая стоимость = %d\n", total);
		}

	}

	break;

	case 5:
	{
		printf("3.	Ввести с экрана число от 1 до 12. По номеру месяца выдать сообщение о времени года. Если пользователь введет недопустимое число, программа должна выдать сообщение об ошибке\n");

		int a = 0;

		printf("Введите номер месяца\n");
		scanf("%d", &a);

		switch (a)
		{

		case 12:
		case 1:
		case 2:

		{
			SetConsoleTextAttribute(hConsole, 1);
			printf("Сейчас зима\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		break;

		case 3:
		case 4:
		case 5:
		{

			SetConsoleTextAttribute(hConsole, 2);
			printf("Сейчас весна\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		break;

		case 6:
		case 7:
		case 8:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("Сейчас лето\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;

		case 9:
		case 10:
		case 11:
		{
			SetConsoleTextAttribute(hConsole, 14);
			printf("Сейчас осень\n");
			SetConsoleTextAttribute(hConsole, 15);

		}

		break;
		default:
		{

			SetConsoleTextAttribute(hConsole, 4);
			printf("Вы ввели недопустимое число\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		}

	}

	break;

	case 6:
	{
		printf("4.	Даны три числа a, b, c. Определить, имеется ли среди них хотя бы одна пара равных\n");
		int a = 0, b = 0, c = 0;

		a = 1 + rand() % 3;
		b = 1 + rand() % 3;
		c = 1 + rand() % 3;

		printf("\n a = %d, b = %d, c = %d \n", a, b, c);

		if (a == b || a == c || b == c)
		{
			printf(" имеется среди них одна пара равных\n");
		}

		//else if (a != b && a == c && b != c)
		/*{
			printf("a=c\n");
		}

		else if (a != b && a != c && b == c)
		{
			printf("b=c\n");
		}*/

		else
		{
			printf("ни одни из чисел не равны друг другу\n");
		}
	}

	break;

	case 7:

	{
		printf("5.	Написать программу для определения времени суток по данному текущему времени и вывести сообщение (утро – с 6 до 12, день – с 12 до 18, вечер – с 18 до 24, ночь – с 0 до 6).\n");

		int time = 0;

		time = 0 + rand() % 24;

		printf(" время = %d\n", time);

		if (time > 6 && time < 12)
		{
			printf("Сейчас утро\n");
		}

		else if (time >= 12 && time < 18)
		{
			printf("Сейчас день\n");
		}

		else if (time >= 18 && time <= 24)
		{
			printf("Сейчас вечер\n");
		}

		else if (time >= 0 && time <= 6)
		{
			printf("Сейчас ночь\n");
		}

	}

	break;

	case 8:
	{
		//1.	Дано двухзначное число. Определить:   
		//a.входит ли в него цифра 5;
		//b.входит ли в него цифра а.

		int x1 = 0, x2 = 0, a = 0, n = 0;

		printf("Введите число а =\t");
		scanf("%d", &a);

		printf("Введите число n =\t");
		scanf("%d", &n);


		x1 = n % 10;
		x2 = n / 10;

		printf("x1 = %d\n", x1);
		printf("x2 = %d\n", x2);



		if (x1 == a || x2 == a)
		{
			printf("Входит\n");
		}

		else
		{
			printf("не входит\n");
		}

	}
	break;

	case 9:

	{
		//2.	Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово "копейка" в правильной форме. Например, 1 копейка, 5 копеек, 42 копейки

		int n = 0;

		n = 1 + rand() % 99;

		printf("n = %d\n", n);

		switch (n)
		{

		case 11:
		case 12:
		case 13:
		case 14:
		{
			printf("копеек\n");
		}
		break;

		default:

		{
			switch (n % 10)
			{
			case 1:
			{
				printf("копейка\n");
			}
			break;

			case 2:
			case 3:
			case 4:
			{
				printf("копейки\n");
			}
			break;

			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			{
				printf("копеек\n");

			}

			break;


			}





		}
		}

	}

	break;

	case 10:
	{
		//3.	Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом (читается одинаково слева направо и справа налево).

		int N;

		//a = 1000 + rand() % 9999;

		printf("Введите натуральное четырехзначное число\t");
		scanf("%d", &N);


		/*if (a / 1000 == (a % 10) * 10 + (a % 100) / 10)
		{
			printf("Yes\n");
		}

		else
		{
			printf("no\n");
		}
*/
		if ((N / 1000 == N % 100) || (N/1000 == N%10))
		{
			printf("Палиндром!\n");
		}
		else
		{
			printf("не палиндром!\n");
		}

	}




	}

	
	{


	}

}
