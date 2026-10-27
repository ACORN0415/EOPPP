// RTPG_9785: vars=3 stmts=6
enum State { SLOW, ON, BLUE };
void test_func(void) {
    int y14 = 63;
    int b99 = -25;
    int sum58 = 6;
    enum State st = SLOW;
    int *ptr = &y14;
    int h0 = -36;
    int sv0 = 0;
    int h1 = 54;
    int sv1 = 0;
    int i;
    for (i = 0; i < 55; i++) {
        switch (b99) {
            case 0: sum58 = 23614; break;
            case 1: y14 = 76; break;
            case 2: y14 = 81; break;
            case 3: b99 = 34112; break;
            default: break;
        }
        b99 = b99 + 1;
    }
}
int main() { test_func(); return 0; }

