#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <string>
#include <vector>
using namespace std;

void main()
{
start:
	system("cls");
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "Введите номер задания от 1 до 7 : ";
	cin >> nz;
	srand(time(NULL));
	switch (nz)
	{

	case 1:

	{
		system("cls");
		cout << "1 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/*
		Каждая бактерия делится на две в течение одной минуты. В начальный момент имеется одна бактерия. Составьте программу,
		которая рассчитывает количество бактерий на заданное вами целое значение момента времени (15 минут, 7 минут и т.п.) .
		*/
		int m, b;
		cout << "Vvedite kol-vo minut : ";
		cin >> m;
		b = 1 + rand() % 999;

		for (b; b <= m; b++)
		{
			b = b * 2;
			if (b >= (500 + rand() % 1000))
			{
				b = 989 + rand() % 10000l;
				cout << "Bakteriy umen'shilos' na " << b;
			}
			cout << "Kol-vo bakteriy za " << m << " min " << b << " bakteriy " << endl;
			system("pause");
			goto start;

		}
	}
	break;

	case 2:

	{
		system("cls");
		cout << "2 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/* Составьте программу вывода на экран всех простых чисел, не превосходящих заданного N.
		Простым называется натуральное число больше единицы, имеющее только два делителя: единицу и само это число*/
		int n, i, k;
		cout << "Vvedite chislo : ";
		cin >> n;

		for (i = 1; i <= n; i++)
		{
			k = n % 2;
			if ((k == 0) && (i != 2))
				cout << "Chislo" << i << "chetnoe , ne yavlyayetsya prostym" << endl;
			else
			{

				int	flag = 0;
				for (int j = 3; j <= i - 1; i++)
				{
					if (i%j == 0)
						flag = 1;
					break;
				}
				if (flag == 0)
					cout << "Chislo " << i << " prostoe" << endl;
				else
					cout << "Chislo " << i << " ne prostoe" << endl;
			}
		}
		system("pause");
		goto start;
		break;
	}

	case 3:

	{
		system("cls");
		cout << "3 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/*
		В 1202г итальянский математик Леонард Пизанский (Фибоначчи) предложил такую задачу: пара кроликов каждый месяц дает приплод – двух кроликов (самца и самку),
		от которых через два месяца уже получается новый приплод. Сколько кроликов будет через год, если в начале года имелась одна пара? Согласно условию задачи числа,
		соответствующие количеству кроликов, которые появляются через каждый месяц, составляют последовательность 1, 1, 2, 3, 5, 8, 13, 21,  37, … Составьте программу,
		позволяющую найти все числа Фибоначчи, меньшие заданного числа N
		*/
		int month, x1 = 1, x2 = 0;
		cout << "Vvedite kol-vo mesyacev: ";
		cin >> month;
		for (x2; x2 <= month;)
		{
			x1 += x2;
			x2 += x1;
			cout << "Kol-vo krolikov v obshem:" << x2 << endl;
			cout << "Kol-vo krolikov v obshem:" << x1 + x2 << endl;
		}
		x2 = ((x1 + x2) * 4) + 8;
		cout << "Obshaya kol-vo krolikov:" << x2 << endl;

		system("pause");
		goto start;
		break;
	}

	case 4:

	{
		system("cls");
		cout << "4 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/*
		Необходимо суммировать все нечётные целые числа в диапазоне, который введёт пользователь с клавиатуры
		*/
		int a, b = 0;
		cout << "vvedite a : ";
		cin >> a;
		for (int i = 1; i <= a; i++)
		{
			if (i % 2 != 0)
			{
				cout << i << " + ";
				b += i;
			}
		}
		cout << "= " << b << endl;

		system("pause");
		goto start;
		break;
	}


	case 5:

	{
		system("cls");
		cout << "5 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/*
		Организовать беспрерывный ввод чисел с клавиатуры, пока пользователь не введёт 0. После ввода нуля, показать на экран количество чисел, которые были введены,
		их общую сумму и среднее арифметическое. Подсказка: необходимо объявить переменную-счетчик, которая будет считать количество введенных чисел, и переменную,
		которая будет накапливать общую сумму чисел.
		*/
		int a = 1, b = 0;

		while (a != 0)
		{
			cout << "Ugadayte chislo: ";
			cin >> a;
			b++;
		}
		cout << "Kol-vo popytok vvoda: " << b << endl;

		system("pause");
		goto start;
		break;
	}

	case 6:

	{
		system("cls");
		cout << "6 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << "Найти: " << endl;
		cout << "a) произведение всех целых чисел от 8 до 15" << endl;
		cout << "b) произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры; 1<= a <= 20)" << endl;
		cout << "c) произведение всех целых чисел от 1 до b (значение b вводится с клавиатуры; 1 <= b <= 20)" << endl;
		cout << "d) произведение всех целых чисел от a до b (значения a и b вводятся с клавиатуры; b >= a)" << endl;
		cout << "------------------------------------------------------------------" << endl;
		char pr;
		cout << "Введите номер примера : ";
		cin >> pr;

		switch (pr)
		{

		case 'a':
		{
			int a = 8;
			int b = 15;
			int sum = 1;
			for (a; a <= b; a++)
			{
				sum = a*a;
				cout << sum << " ";
			}
		}
		break;

		case 'b':
		{
		barl:
			int a,sum;
			cout << "Vvedite a: ";
			cin >> a;
			if (1 <= a&&a <= 20)
			{
				for (a; a <= 20; a++)
				{
					sum = a*a;
					cout << sum << " ";
				}
			}
			else
			{
				cout << "a polozhtel'noe chislo!" << endl;
				goto barl;
			}
			
		}
		break;

		}

		system("pause");
		goto start;
		break;

	}

	case 7:

	{
		system("cls");
		cout << "7 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/*
		Напечатать таблицу стоимости 50, 100, 150, ..., 1000 г сыра (стоимость 1 кг сыра вводится с клавиатуры).
		*/
		int kg,sum;
		cout << "Vvedite stoimost' 1kg syra: ";
		cin >> kg;
		for (int i = 50; i <= 1000; i += 50)
		{
			sum = i*kg / 1000;
			cout << i << " gramm syra stoit " << sum <<" tenge"<< endl;
		}

		system("pause");
		goto start;
		break;
	}

	default:
		system("cls");
		cout << "      !!! Введенного задания не существует !!! " << endl;
		cout << " *** Нажмите ENTER что бы вернуться к выбору задания *** " << endl;
		system("pause");
		goto start;
		break;
	}
}
