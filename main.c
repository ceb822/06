#include <stdio.h>

int square(int a) {
    return (a * a);
}

int main()
{
    int a=2;
    a=square(a);
    printf("a=%i\n",a);
}