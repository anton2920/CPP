#ifndef LAB_DEV_FRACTION_HPP
#define LAB_DEV_FRACTION_HPP

#include <ostream>

namespace lab {
    class fraction {
    private:
        int m, n;

        fraction reduction();
    public:
        explicit fraction(int m = 0, int n = 1);
        fraction(const fraction &);
        virtual ~fraction();

        fraction &operator=(const fraction &);
        fraction &operator=(int);

        fraction operator+(const fraction &) const;
        fraction operator-(const fraction &) const;
        fraction operator*(const fraction &) const;
        fraction operator/(const fraction &) const;

        fraction operator+(int) const;
        fraction operator-(int) const;
        fraction operator*(int) const;
        fraction operator/(int) const;

        void print(std::ostream &);

        int getM() const;
        int getN() const;

        void setM(int a);
        void setN(int a);
    };

    int nod(int a, int b);
    int nok(int a, int b);
}

#endif
