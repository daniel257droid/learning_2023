 #include <stdio.h>


struct Time {
    int hours;
    int minutes;
    int seconds;
};


struct Time calculateTimeDifference(const struct Time* startTime, const struct Time* endTime) {
    struct Time difference;

    int startTotalSeconds = startTime->hours * 3600 + startTime->minutes * 60 + startTime->seconds;
    int endTotalSeconds = endTime->hours * 3600 + endTime->minutes * 60 + endTime->seconds;
    int totalSeconds = endTotalSeconds - startTotalSeconds;

    difference.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    difference.minutes = totalSeconds / 60;
    difference.seconds = totalSeconds % 60;

    return difference;
}


void displayTime(const struct Time* time) {
    printf("Hours: %d\n", time->hours);
    printf("Minutes: %d\n", time->minutes);
    printf("Seconds: %d\n", time->seconds);
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter start time:\n");
    printf("Hours: ");
    scanf("%d", &startTime.hours);
    printf("Minutes: ");
    scanf("%d", &startTime.minutes);
    printf("Seconds: ");
    scanf("%d", &startTime.seconds);

    difference = calculateTimeDifference(&startTime, &endTime);

    printf("\nDifference between the two time periods:\n");
    displayTime(&difference);

    return 0;
}