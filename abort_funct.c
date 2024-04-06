// abort() can terminate the function. 

#include <stdlib.h>
#include <conio.h>

int main()
{
    for(;;) if(getche() == 'Q') abort();

    return 0;
}