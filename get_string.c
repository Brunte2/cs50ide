#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Name: ");
    printf("hello, %s\n", s);
}