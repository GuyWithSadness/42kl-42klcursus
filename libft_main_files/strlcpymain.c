#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.c"

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

	r = ft_strlcpy(buffer,string,size);

    printf("My Func: Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
