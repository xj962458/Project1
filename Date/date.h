#ifndef _DATE_H
#define _DATE_H

class date
{
private:
    int year, month, day;

public:
    date(const char* str);           //�����ַ���2013-10-01
    date(int y, int m, int d); //y,m,d�ֱ����������
    date();                    //�ֶ�����������
    bool isLeap();             //�ж��Ƿ�Ϊ����
    int days();                //�жϵ�ǰ����Ϊ����ĵڼ��죬��2013-03-11Ϊ��70��
    void showDate();           //�������
};
#endif