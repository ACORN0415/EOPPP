// RTPG_3215: vars=7 stmts=4
int xn[64];
int yo[64];
enum State { SLOW, BLUE, RED };
void test_func(void) {
    int acc17 = 9;
    int tmp0 = 37442;
    int cur96 = 98;
    int dat40 = -30;
    int b86 = -48;
    int x99 = 53110;
    int v24 = 49;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 22; i++) {
        switch (dat40) {
            case 0: acc17 = 71; break;
            case 1: tmp0 = 28767; break;
            case 2: v24 = -43; break;
            case 3: cur96 = 79; break;
            default: break;
        }
        dat40 = dat40 + 1;
    }
}
int main() { test_func(); return 0; }

