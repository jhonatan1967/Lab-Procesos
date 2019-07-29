#include<stdio.h> 
#include<fcntl.h> 
#include<errno.h> 

int main() 
{      
    
    FILE *fp;
	fp = fopen ( "Laboratorio.txt", "w" );    
    int rc = fork();

    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        fputs("Esta es una prueba en el hijo",fp);
        
    } else {
        fputs("Esta es una prueba en el padre",fp);
    }

    fclose(fp);
	return 0;
} 