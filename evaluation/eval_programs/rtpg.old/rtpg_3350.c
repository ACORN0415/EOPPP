// RTPG_3350: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int c15 = 85;
    int tmp90 = 8;
    int hi13 = 18790;
    int y53 = 60617;
    int h0 = 44929;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        c15 = xn[i];
        tmp90 = c15 - hi13;
        c15 = y53;
        hi13 = hi13 - c15;
        hi13 = hi13 - 4;
        yo[i] = c15;
    }
}
int main() { test_func(); return 0; }

