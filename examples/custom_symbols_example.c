#include "../progress-bar-c.h"

int main() {
    ProgressBar pb = init('=', 25, 75);
    setStartEndSymbols(&pb, '<', '>');
    showPercent(&pb, true);
    
    for(int i = 0; i <= 75; i++) {
        update(&pb, i);
        print(pb);
        sleep(1);
    }
    
    return 0;
}
