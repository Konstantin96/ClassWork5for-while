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
	cout << "������� ����� ������� �� 1 �� 7 : ";
	cin >> nz;
	srand(time(NULL));
	switch (nz)
	{

	case 1:

	{
		system("cls");
		cout << "1 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/*
		������ �������� ������� �� ��� � ������� ����� ������. � ��������� ������ ������� ���� ��������. ��������� ���������,
		������� ������������ ���������� �������� �� �������� ���� ����� �������� ������� ������� (15 �����, 7 ����� � �.�.) .
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
		cout << "2 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/* ��������� ��������� ������ �� ����� ���� ������� �����, �� ������������� ��������� N.
		������� ���������� ����������� ����� ������ �������, ������� ������ ��� ��������: ������� � ���� ��� �����*/
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
		cout << "3 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/*
		� 1202� ����������� ��������� ������� ��������� (���������) ��������� ����� ������: ���� �������� ������ ����� ���� ������� � ���� �������� (����� � �����),
		�� ������� ����� ��� ������ ��� ���������� ����� �������. ������� �������� ����� ����� ���, ���� � ������ ���� ������� ���� ����? �������� ������� ������ �����,
		��������������� ���������� ��������, ������� ���������� ����� ������ �����, ���������� ������������������ 1, 1, 2, 3, 5, 8, 13, 21,  37, � ��������� ���������,
		����������� ����� ��� ����� ���������, ������� ��������� ����� N
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
		cout << "4 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/*
		���������� ����������� ��� �������� ����� ����� � ���������, ������� ����� ������������ � ����������
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
		cout << "5 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/*
		������������ ������������ ���� ����� � ����������, ���� ������������ �� ����� 0. ����� ����� ����, �������� �� ����� ���������� �����, ������� ���� �������,
		�� ����� ����� � ������� ��������������. ���������: ���������� �������� ����������-�������, ������� ����� ������� ���������� ��������� �����, � ����������,
		������� ����� ����������� ����� ����� �����.
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
		cout << "6 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << "�����: " << endl;
		cout << "a) ������������ ���� ����� ����� �� 8 �� 15" << endl;
		cout << "b) ������������ ���� ����� ����� �� a �� 20 (�������� a �������� � ����������; 1<= a <= 20)" << endl;
		cout << "c) ������������ ���� ����� ����� �� 1 �� b (�������� b �������� � ����������; 1 <= b <= 20)" << endl;
		cout << "d) ������������ ���� ����� ����� �� a �� b (�������� a � b �������� � ����������; b >= a)" << endl;
		cout << "------------------------------------------------------------------" << endl;
		char pr;
		cout << "������� ����� ������� : ";
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
		cout << "7 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/*
		���������� ������� ��������� 50, 100, 150, ..., 1000 � ���� (��������� 1 �� ���� �������� � ����������).
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
		cout << "      !!! ���������� ������� �� ���������� !!! " << endl;
		cout << " *** ������� ENTER ��� �� ��������� � ������ ������� *** " << endl;
		system("pause");
		goto start;
		break;
	}
}
