#include "date.h"
#include <iostream>
#include<stdlib.h>
using namespace std;

void date::showDate()//�������
{
	cout << year << "��" << month << "��" << day << "��" << endl;
}

date::date()//�ֶ�����������
{
	cin >> year;
	cin >> month;
	cin >> day;
}

bool date::isLeap()
{
	return (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0) ? true : false);
}

date::date(const char* str)          //�����ַ���2013-10-01
{
	int i;
	char y[5], m[3], d[3];
	for (i = 0; i <= 9; i++)
	{
		if (i >= 0 && i < 4)
			y[i] = str[i];
		else if (i >= 5 && i < 7)
			m[i - 5] = str[i];
		else if (i > 7 && i < 10)
			d[i - 8] = str[i];
	}
	year = atoi(y);
	month = atoi(m);
	day = atoi(d);
}
date::date(int y, int m, int d) //y,m,d�ֱ����������
{
	year = y;
	month = m;
	day = d;
}
int date::days()                //�жϵ�ǰ����Ϊ����ĵڼ��죬��2013-03-11Ϊ��70��
{
	int i,d=1;
	static int day_tab[][13] = { {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };
	int(*p)[13] = day_tab;
	for (i = 1; i < month; i++)
		d += *(*(p + isLeap()) + i);
	return d;
}