#include <stdio.h>
#include "../progress-bar-c.h"

int main() {
    // Initilaize counter
    int i = 0;
    // Initialize progress bar
    ProgressBar pb = init('#', 10, 6);
    // Show percents
    showPercent(&pb, true);
    // Show count
    showCount(&pb, true);
    // Set completed text
    setCompletedText(&pb, "Completed");
    while (i <= 6) {
        // Sleep one second
        sleep(1);
        // Update counter
        update(&pb, i);
        // Print progressbar
        print(pb);
        i++;
    }
    printf("Hello, world\n");
}
