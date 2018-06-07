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
	printf("������� ����� �������:\t");
	scanf("%d", &n);

	switch (n)
	{

	case 1:

	{
		printf("1.	������ � ���������� ��� �����. ����������, ��� ������, �������� ��������� ��� ������ �������� �������� ���� �����. ����� ������� � ���� ���������\n");

		int a = 0, b = 0;

		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;

		printf("\n a = %d, b = %d\n", a, b);

		if ((pow(a, 2) - pow(b, 2)) > log(pow(a, 2) - pow(b, 2)))
		{
			printf("�������� ��������� ������ \n");
		}

		else
		{
			printf("������ �������� �������� ���� ����� ������ \n");
		}
	}
	break;

	case 2:
	{
		printf("2.	������ � ���������� �������������� ������� � ������ ����� � ����������, � ����� ��������� ��� ��������� (� ��������� ��� ��������).\n");
		float d = 0, s = 0;

		printf("������� ������\n");
		scanf("%f", &s);

		printf("������� �������\n");
		scanf("%f", &d);

		if (d > 0 && s > 0)
		{
			SetConsoleTextAttribute(hConsole, 4);
			printf("��������� ������� � ����� ������\n");
			SetConsoleTextAttribute(hConsole, 15);

		}

		else if (d > 0 && s < 0)
		{
			SetConsoleTextAttribute(hConsole, 1);
			printf("��������� ������� � �������� ������\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		else if (d < 0 && s>0)
		{
			SetConsoleTextAttribute(hConsole, 9);
			printf("�������� ������� � ����� ������\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		else if (d < 0 && s < 0)
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("�������� ������� � �������� ������\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

	}

	break;

	case 3:
	{
		printf("1.	�������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������ ��������������� 20% ������. ������ ����������������� ��������� � ���� ������ (����� �� 1 �� 7).\n");

		int  day = 0;
		float call = 0, cost = 22.3, total = 0;

		printf("\t ������� ���� ������ (1-7) = ");
		scanf("%d", &day);

		printf("\t ������� ����������������� � �������= ");
		scanf("%f", &call);

		printf("\t ------------------------------------\n");
		/*printf("������� ��������� ����������� = \t");
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

			printf("\t ������ � ����������� ��� %d\n", 20);
			printf("\t ����� �� ������� = %f\n", total);
			//printf("\t --------------\n");
			SetConsoleTextAttribute(hConsole, 15);

			//printf("\t ����� ��������� ��������� �� �������� � ������������ = %f\n", total);
		}

		break;
		default:
		{
			total = (cost)*call;

			SetConsoleTextAttribute(hConsole, 4);
			printf("\t ����� �� ������� = %f\n", total);
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

			printf("����� ��������� ��������� = %d\n", total);
		}

		else
		{
			total = (cost )*call;

			printf("����� ��������� ��������� = %d\n", total);
		}*/
	}

	break;

	case 4:
	{
		printf("2.	��������� ��������� ������� � ������ ������. ������ 5% ���������������, ���� ����� ������� ��������� 500 ����� � 10%, ���� ������ 1000 �����.\n");

		int n = 0, cost = 0, total;

		printf("������� ���������� ������� = \t");
		scanf("%d", &n);

		printf("������� ���� �� ������� = \t");
		scanf("%d", &cost);

		if ((n*cost) > 500 && (n*cost) < 1000)
		{
			total = (n*cost) - ((n*cost)*0.05);
			printf("����� �������� 500 KZT ������ 5 %% � ����� ��������� =  %d\n", total);

		}

		else if ((n*cost) > 1000)
		{
			total = (n*cost) - ((n*cost)*0.1);
			printf("����� �������� 1000 KZT ������ 10 %% � ����� ��������� =  %d\n", total);

		}

		else
		{
			total = (n*cost);
			printf("��� ������ � ����� ��������� = %d\n", total);
		}

	}

	break;

	case 5:
	{
		printf("3.	������ � ������ ����� �� 1 �� 12. �� ������ ������ ������ ��������� � ������� ����. ���� ������������ ������ ������������ �����, ��������� ������ ������ ��������� �� ������\n");

		int a = 0;

		printf("������� ����� ������\n");
		scanf("%d", &a);

		switch (a)
		{

		case 12:
		case 1:
		case 2:

		{
			SetConsoleTextAttribute(hConsole, 1);
			printf("������ ����\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		break;

		case 3:
		case 4:
		case 5:
		{

			SetConsoleTextAttribute(hConsole, 2);
			printf("������ �����\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

		break;

		case 6:
		case 7:
		case 8:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("������ ����\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;

		case 9:
		case 10:
		case 11:
		{
			SetConsoleTextAttribute(hConsole, 14);
			printf("������ �����\n");
			SetConsoleTextAttribute(hConsole, 15);

		}

		break;
		default:
		{

			SetConsoleTextAttribute(hConsole, 4);
			printf("�� ����� ������������ �����\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		}

	}

	break;

	case 6:
	{
		printf("4.	���� ��� ����� a, b, c. ����������, ������� �� ����� ��� ���� �� ���� ���� ������\n");
		int a = 0, b = 0, c = 0;

		a = 1 + rand() % 3;
		b = 1 + rand() % 3;
		c = 1 + rand() % 3;

		printf("\n a = %d, b = %d, c = %d \n", a, b, c);

		if (a == b || a == c || b == c)
		{
			printf(" ������� ����� ��� ���� ���� ������\n");
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
			printf("�� ���� �� ����� �� ����� ���� �����\n");
		}
	}

	break;

	case 7:

	{
		printf("5.	�������� ��������� ��� ����������� ������� ����� �� ������� �������� ������� � ������� ��������� (���� � � 6 �� 12, ���� � � 12 �� 18, ����� � � 18 �� 24, ���� � � 0 �� 6).\n");

		int time = 0;

		time = 0 + rand() % 24;

		printf(" ����� = %d\n", time);

		if (time > 6 && time < 12)
		{
			printf("������ ����\n");
		}

		else if (time >= 12 && time < 18)
		{
			printf("������ ����\n");
		}

		else if (time >= 18 && time <= 24)
		{
			printf("������ �����\n");
		}

		else if (time >= 0 && time <= 6)
		{
			printf("������ ����\n");
		}

	}

	break;

	case 8:
	{
		//1.	���� ����������� �����. ����������:   
		//a.������ �� � ���� ����� 5;
		//b.������ �� � ���� ����� �.

		int x1 = 0, x2 = 0, a = 0, n = 0;

		printf("������� ����� � =\t");
		scanf("%d", &a);

		printf("������� ����� n =\t");
		scanf("%d", &n);


		x1 = n % 10;
		x2 = n / 10;

		printf("x1 = %d\n", x1);
		printf("x2 = %d\n", x2);



		if (x1 == a || x2 == a)
		{
			printf("������\n");
		}

		else
		{
			printf("�� ������\n");
		}

	}
	break;

	case 9:

	{
		//2.	�������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 99 ��������� � ���� ����� "�������" � ���������� �����. ��������, 1 �������, 5 ������, 42 �������

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
			printf("������\n");
		}
		break;

		default:

		{
			switch (n % 10)
			{
			case 1:
			{
				printf("�������\n");
			}
			break;

			case 2:
			case 3:
			case 4:
			{
				printf("�������\n");
			}
			break;

			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			{
				printf("������\n");

			}

			break;


			}





		}
		}

	}

	break;

	case 10:
	{
		//3.	���� ����������� �������������� �����. ��������, �������� �� ��� ����������� (�������� ��������� ����� ������� � ������ ������).

		int N;

		//a = 1000 + rand() % 9999;

		printf("������� ����������� �������������� �����\t");
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
			printf("���������!\n");
		}
		else
		{
			printf("�� ���������!\n");
		}

	}




	}

	
	{


	}

}
