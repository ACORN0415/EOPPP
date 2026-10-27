// RTPG_327: vars=7 stmts=2
void test_func(void) {
    int out92 = 87;
    int a58 = 48;
    int prev34 = 25;
    int y92 = 60;
    int y94 = 27;
    int cur98 = 37;
    int a83 = 2;
    int *ptr = &prev34;
    int i;
    for (i = 0; i < 60; i++) {
        switch (prev34) {
            case 0: a58 = -23; break;
            case 1: out92 = -46; break;
            default: break;
        }
        prev34 = prev34 + 1;
    }
}
int main() { test_func(); return 0; }

