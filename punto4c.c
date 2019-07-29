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
        char *cmd = "ls";
        char *argv[3];
    argv[0] = "ls";
    argv[1] = "-la";
    argv[2] = NULL;

    execvp(cmd, argv);
        
    }
    
    return 0;
}