#include <stdio.h>
#include <time.h>

int main(){

	time_t currentTime = time(NULL);
	struct tm *cur_time = localtime(&currentTime);

	char calendarBuffer[100];
	char timeBuffer[50];
	
	int displayCalendarInfo = strftime(calendarBuffer, 100,"%A %d %B %Y", cur_time);
	int displayTimeInfo = strftime(timeBuffer, 50, "Current time: %H:%M:%S", cur_time);

	printf("Welcome to the Pomodoro Clock App!\n");
	printf("%s\n", calendarBuffer);
	printf("%s\n", timeBuffer);
}
