#include <stdio.h>

// Structure definition for TIME
struct TIME {
    int hour;
    int minutes;
    int seconds;
};

// Function to calculate the sum of two TIME structures
struct TIME calculateSum(struct TIME t1, struct TIME t2) {
    struct TIME sum;
    
    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + (sum.seconds / 60);
    sum.hour = t1.hour + t2.hour + (sum.minutes / 60);
    
    sum.seconds %= 60;
    sum.minutes %= 60;
    
    return sum;
}

// Function to calculate the difference between two TIME structures
struct TIME calculateDifference(struct TIME t1, struct TIME t2) {
    struct TIME diff;
    int seconds1 = t1.hour * 3600 + t1.minutes * 60 + t1.seconds;
    int seconds2 = t2.hour * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSeconds = seconds1 - seconds2;

    diff.hour = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

int main() {
    struct TIME startTime, stopTime, sumTime, diffTime;

    // Input start time
    printf("Enter start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hour, &startTime.minutes, &startTime.seconds);

    // Input stop time
    printf("Enter stop time (hh:mm:ss): ");
    scanf("%d:%d:%d", &stopTime.hour, &stopTime.minutes, &stopTime.seconds);

    // Calculate sum and difference
    sumTime = calculateSum(startTime, stopTime);
    diffTime = calculateDifference(startTime, stopTime);

    // Display results
    printf("\nSum of times: %02d:%02d:%02d\n", sumTime.hour, sumTime.minutes, sumTime.seconds);
    printf("Difference of times: %02d:%02d:%02d\n", diffTime.hour, diffTime.minutes, diffTime.seconds);

    return 0;
}
