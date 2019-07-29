#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

main(int argc, char *argv[])
{    
    
    int rc = fork();

    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) 
    
    {   
        
        close(STDOUT_FILENO);
        printf("Test");        
    } 
       else 
    {           
        printf("El padre escribe");
    } 
    return 0;
}