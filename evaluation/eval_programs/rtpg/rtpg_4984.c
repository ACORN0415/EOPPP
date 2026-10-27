// RTPG_4984: vars=4 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int prev26 = 10;
    int b84 = 49445;
    int y45 = 21758;
    int b66 = 3;
    int *ptr = &y45;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 39;
    int sv1 = 0;
    int i;
    for (i = 0; i < 20; i++) {
        switch (y45) {
            case 0: prev26 = 8; break;
            case 1: prev26 = 10; break;
            default: break;
        }
        y45 = y45 + 1;
    }
}
int main() { test_func(); return 0; }

