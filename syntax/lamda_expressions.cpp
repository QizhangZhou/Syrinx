#include "lamda_expressions.h"

int lamdaExpressfunc()
{
    static int a = 100;
    int b = 200;
    int c = 400;

    auto f = [= , &c]()mutable {
        c = a + b;
        cout << "alpha c : " << c << endl;
        return a + b + c;
        };
    cout << c << endl;    
    cout << f() << endl;
    return 0;
}