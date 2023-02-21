#include <stdio.h>
int main()
{
    printf("%d", printf("%s\n", "hello world"));
    // %d return number of character in the second printf "hello world "

    printf("\n%10s\n", "hello world");
    // %10s that represent the lenght of string printed
    printf("%20s", "hello world"); // length 20

    // what is the output of the following c programe
    char x = 255;
    x = x + 10;
    printf("\n%d", x); // output 9

    // what does the following program fragment prints

    unsigned i = 1;
    int j = -4;
    printf("%u", i + j);
    // if $d that will be return -3 , but %u that return unsigned represrntation
    // in my computer => (94294967293)
}