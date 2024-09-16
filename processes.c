#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <windows.h>

int main(int argc, char *argv[]) {
    //Function that takes in user input and adds it to itself that many number of times
    int user_input  = atoi(argv[1]);
    printf("%d\n", user_input);
    int sum = 0;
    while(1){
        sum = sum + user_input;
        printf("PID = %d - Value of sum = %d\n", getpid(), sum);
        sleep(1);
    }
    
    return 0;
}