class Complex
{
public:
    Complex(int r = 0, int i = 0);
    void display() const;
    friend Complex add(const Complex&,Complex&);      //���������
    friend Complex subtract(const Complex&,Complex&); //���������
    friend Complex multiply(const Complex&,Complex&); //���������
private:
    int real;
    int imag;
};
