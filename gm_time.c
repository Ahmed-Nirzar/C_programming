#include <stdio.h>
#include <time.h>

int main()
{
    struct tm *coordinated;
    time_t t;

    t = time(NULL);
    coordinated = gmtime(&t);
    printf("Coordinated Universal time and date: %s", asctime(coordinated));

    return 0;
}

