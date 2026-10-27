// RTPG_7084: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int cnt96 = 8740;
    int v12 = 13;
    int dat26 = 80;
    int a22 = 63435;
    int out11 = 58190;
    int h0 = 41;
    int sv0 = 0;
    int h1 = 60385;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cnt96 = xn[i];
        cnt96 = dat26 + v12;
        a22 = v12 - out11;
        yo[i] = dat26;
    }
}
int main() { test_func(); return 0; }

