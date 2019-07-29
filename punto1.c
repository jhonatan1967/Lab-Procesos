#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

main(int argc, char *argv[])
{    
    int x=100;
    int rc = fork();

    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        
        printf("El valor de x en el hijo es:%d", x);
        x=x+100;
        printf("El valor de x luego del cambio en el hijo es: %d", x);
    } else {
        x=x+200;
        printf("El valor de x luego del cambio en el padre es:%d",x);
    }
    return 0;
}