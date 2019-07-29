#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

main(int argc, char *argv[])
{    
    
    int rc = fork();

    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        int a =wait(NULL);
        printf("Valor en el hijo %d",a);                      
    } 
    else 
    {
        int a =wait(NULL);
        printf(" Valor en el padre %d",a);
    }
    return 0;
}