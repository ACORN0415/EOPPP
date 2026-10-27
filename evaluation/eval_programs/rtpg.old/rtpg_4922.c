// RTPG_4922: vars=4 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int prev26 = 10;
    int b66 = 49445;
    int b84 = 21758;
    int y45 = 3;
    int *ptr = &b84;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 39;
    int sv1 = 0;
    int i;
    for (i = 0; i < 20; i++) {
        switch (b84) {
            case 0: prev26 = 8; break;
            case 1: prev26 = 10; break;
            default: break;
        }
        b84 = b84 + 1;
    }
}
int main() { test_func(); return 0; }

