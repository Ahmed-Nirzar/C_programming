// This fuction display the local time of the system.

#include <stdio.h>
#include <time.h>

int main()
{
    time_t local

    local = time(NULL);
    printf(ctime(&local));

    return 0;
}