#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const string name = get_string("What's your name? ");
    printf("Hello, %s\n", name);
}
