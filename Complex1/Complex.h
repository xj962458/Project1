class Complex
{
public:
    Complex(int r = 0, int i = 0);
    void display() const;
    Complex add(const Complex &) const;      //���������
    Complex subtract(const Complex &) const; //���������
    Complex multiply(const Complex &) const; //���������
private:
    int real;
    int imag;
};
