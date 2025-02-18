#include "../progress-bar-c.h"

int main() {
    ProgressBar pb = init('#', 20, 100);
    
    for(int i = 0; i <= 100; i++) {
        update(&pb, i);
        print(pb);
        sleep(1);
    }
    
    return 0;
}
