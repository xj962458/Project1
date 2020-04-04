class Complex
{
public:
    Complex(int r = 0, int i = 0);
    void display() const;
    Complex add(const Complex &) const;      //两复数相加
    Complex subtract(const Complex &) const; //两复数相减
    Complex multiply(const Complex &) const; //两复数相乘
private:
    int real;
    int imag;
};
