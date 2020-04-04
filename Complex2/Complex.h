class Complex
{
public:
    Complex(int r = 0, int i = 0);
    void display() const;
    friend Complex add(const Complex&,Complex&);      //两复数相加
    friend Complex subtract(const Complex&,Complex&); //两复数相减
    friend Complex multiply(const Complex&,Complex&); //两复数相乘
private:
    int real;
    int imag;
};
