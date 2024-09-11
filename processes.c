/*
Assignment:
    1.Create a Process Done
    2.Run multiple processes ( 3 to 4) at the same time. Done
    3.Record all the information including PIDs for the processes. Done
    3.Find a mechanism to kill the process Done
    4.Check your code in to GIT Done
*/

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