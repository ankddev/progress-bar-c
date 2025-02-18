#include "../progress-bar-c.h"

int main() {
    ProgressBar pb = init('>', 30, 50);
    showPercent(&pb, true);
    showCount(&pb, true);
    setCustomFormat(&pb, "Progress: {bar} | {percent} Complete ({count})");
    
    for(int i = 0; i <= 50; i++) {
        tick(&pb);
        print(pb);
        sleep(1);
    }
    
    return 0;
}
