
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t start = time(NULL);  // Get the current time.

    // Use a while loop to countdown from 60 to 0.
    while (difftime(time(NULL), start) < 6) {
        printf("%d\n", (int)(60 - difftime(time(NULL), start)));  // Print the current number of seconds.
    }

    printf("Blast off!\n");  // Print a message when the countdown reaches 0.

    return 0;
}