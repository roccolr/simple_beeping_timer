#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char ** argv){
    int user_hours = atoi(argv[1]);
    int user_minutes = atoi(argv[2]);
    int user_seconds = atoi(argv[3]);
    int hours=0, minutes=0, seconds=0;
    // sleep(2);
    printf("[TIMER] - Selezionato timer di %d:%d:%d\nAvvio in 3 secondi;\n", user_hours, user_minutes, user_seconds);
    system("clear");
    // execl("/bin/clear", "/bin/clear", NULL);
    system("clear");
    printf("[TIMER] - Selezionato timer di %d:%d:%d\nAvvio in 2 secondi;\n", user_hours, user_minutes, user_seconds);
    sleep(1);
    system("clear");
    // execl("/bin/clear", "/bin/clear", NULL);
    printf("[TIMER] - Selezionato timer di %d:%d:%d\nAvvio in 1 secondi;\n", user_hours, user_minutes, user_seconds);
    sleep(1);
    // execl("/bin/clear", "/bin/clear", NULL);
    system("clear");
    printf("[TIMER] - INZIO TIMER\n");
    printf("%d:%d:%d\n", hours, minutes, seconds);
    while(!(hours == user_hours && minutes == user_minutes && seconds == user_seconds)){
        sleep(1);
        seconds++;
        if(seconds != 0 && seconds % 60 == 0){
            seconds = 0;
            minutes++;
            if(minutes != 0 && minutes % 60 == 0){
                minutes = 0;
                hours++;
            }
        }
        if(!(hours == user_hours && minutes == user_minutes && seconds == user_seconds)) {
            system("clear");
            printf("%d:%d:%d\n", hours, minutes, seconds);
        }
    }
    printf("%d:%d:%d\n", hours, minutes, seconds);
    for(int i=0; i<5; i++){
        // execl("/bin/echo", "/bin/echo", "-e", '\a', NULL);
        system("echo '\a'");
        sleep(1);
    }
    printf("%d:%d:%d\nFINE!\n", hours, minutes, seconds);

    return 0;
}