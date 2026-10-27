// RTPG_328: vars=7 stmts=2
void test_func(void) {
    int prev34 = 87;
    int y92 = 48;
    int y94 = 25;
    int cur98 = 60;
    int a58 = 27;
    int out92 = 37;
    int a83 = 2;
    int *ptr = &y94;
    int i;
    for (i = 0; i < 60; i++) {
        switch (y94) {
            case 0: y92 = -23; break;
            case 1: prev34 = -46; break;
            default: break;
        }
        y94 = y94 + 1;
    }
}
int main() { test_func(); return 0; }

