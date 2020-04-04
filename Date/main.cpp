#include "date.h" 
#include <iostream>
using namespace std;

int main()
{
	date date1(2013, 10, 1);
	date1.showDate();
	if (date1.isLeap())
		cout << "是闰年" << endl;
	else
		cout << "非闰年" << endl;
	cout << "第" << date1.days() << "天" << endl;

	date date2("2013-10-01");
	date2.showDate();

	date date3;
	date3.showDate();

	return 0;
}
