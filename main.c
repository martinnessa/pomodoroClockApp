#include <stdio.h>
#include <time.h>

int main(){

	// 25 minute timer in seconds
	int pomodoroTimer = 1500;
	int cooldownTimer = 300;

	printf("Welcome to the Pomodoro Clock App!\n");
	printf("Time remaining: \n");

	while(pomodoroTimer > 0){

		int m = pomodoroTimer / 60;
		int s = pomodoroTimer % 60;

		printf("\r%02d:%02d", m, s);

		fflush(stdout);
	
		clock_t stop = clock() + CLOCKS_PER_SEC;

		while (clock() < stop){}

		pomodoroTimer--;
	}
}
