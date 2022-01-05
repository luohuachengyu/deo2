#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 4;
    a > b ? b : a;
    int c = a;
    printf("a");
    b = 6;
    a = 5;
    return 0;
}
