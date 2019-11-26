#include <cstdio>

void wont_double_it(int param)
{
    param = param * 2;
}

void will_double_it(int& param)
{
    param = param * 2;
}

int main(void)
{
    int x = 1;
    int y = x;
    y = 2;

    printf("x = %d y = %d\n", x, y);

    int& xref = x;
    xref = 3;

    printf("x = %d\n", x);
    printf("xref = %d\n", xref);

    wont_double_it(x);
    printf("still %d\n", x);
    
    will_double_it(x);
    printf("now %d\n", x);
}