// RTPG_9493: vars=6 stmts=9
int xn[16];
int yo[16];
void test_func(void) {
    int a61 = -24;
    int z84 = 0;
    int b35 = 8;
    int acc98 = 6;
    int sum72 = -6;
    int x22 = 8;
    int i;
    for (i = 0; i < 59; i++) {
        switch (z84) {
            case 0: acc98 = 42; break;
            case 1: sum72 = 8; break;
            default: break;
        }
        z84 = z84 + 1;
    }
}
int main() { test_func(); return 0; }

