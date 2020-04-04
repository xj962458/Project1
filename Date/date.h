#ifndef _DATE_H
#define _DATE_H

class date
{
private:
    int year, month, day;

public:
    date(const char* str);           //输入字符串2013-10-01
    date(int y, int m, int d); //y,m,d分别代表年月日
    date();                    //手动输入年月日
    bool isLeap();             //判断是否为闰年
    int days();                //判断当前日期为该年的第几天，如2013-03-11为第70天
    void showDate();           //输出日期
};
#endif