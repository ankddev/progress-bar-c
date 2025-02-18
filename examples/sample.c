#include <stdio.h>
#include "../progress-bar-c.h"

int main() {
    int i = 0;
    ProgressBar pb = init('#', 10, 10);
    showPercent(&pb, true);
    showCount(&pb, true);
    while (i <= 10) {
        sleep(1);
        update(&pb, i);
        print(pb);
        i++;
    }
    printf("Hello, world\n");
}
