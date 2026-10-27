// RTPG_9589: vars=3 stmts=6
enum State { SLOW, ON, BLUE };
void test_func(void) {
    int y14 = 63;
    int sum58 = -25;
    int b99 = 6;
    enum State st = SLOW;
    int *ptr = &y14;
    int h0 = -36;
    int sv0 = 0;
    int h1 = 54;
    int sv1 = 0;
    int i;
    for (i = 0; i < 55; i++) {
        switch (sum58) {
            case 0: b99 = 23614; break;
            case 1: y14 = 76; break;
            case 2: y14 = 81; break;
            case 3: sum58 = 34112; break;
            default: break;
        }
        sum58 = sum58 + 1;
    }
}
int main() { test_func(); return 0; }

