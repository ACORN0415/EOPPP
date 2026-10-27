// RTPG_3361: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int hi13 = 85;
    int y53 = 8;
    int c15 = 18790;
    int tmp90 = 60617;
    int h0 = 44929;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        hi13 = xn[i];
        y53 = hi13 - c15;
        hi13 = tmp90;
        c15 = c15 - hi13;
        c15 = c15 - 4;
        yo[i] = hi13;
    }
}
int main() { test_func(); return 0; }

