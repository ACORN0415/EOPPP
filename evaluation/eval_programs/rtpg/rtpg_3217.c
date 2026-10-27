// RTPG_3217: vars=4 stmts=6
enum State { GREEN, RED, FAST };
void test_func(void) {
    int v61 = 25;
    int cnt80 = 35322;
    int val43 = 2;
    int acc68 = 59407;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 8; i++) {
        switch (acc68) {
            case 0: cnt80 = 28974; break;
            case 1: cnt80 = 3; break;
            case 2: v61 = 31163; break;
            default: break;
        }
        acc68 = acc68 + 1;
    }
}
int main() { test_func(); return 0; }

