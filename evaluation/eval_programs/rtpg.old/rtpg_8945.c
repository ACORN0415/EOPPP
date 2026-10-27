// RTPG_8945: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int x90 = 20;
    int dat93 = -32;
    int acc39 = 3;
    int x71 = 4;
    int h0 = 90;
    int sv0 = 0;
    int h1 = 15;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat93 = xn[i];
        acc39 = acc39 - 4;
        dat93 = dat93;
        acc39 = acc39 + 1;
        yo[i] = x90;
    }
}
int main() { test_func(); return 0; }

