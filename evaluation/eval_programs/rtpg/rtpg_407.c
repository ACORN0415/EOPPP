// RTPG_407: vars=8 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int res1 = 26;
    float res74 = 74.68;
    int a3 = 47;
    int c67 = 21217;
    int acc98 = 2;
    double prev80 = 80.39;
    double cnt49 = 57.01;
    int out93 = 9;
    int i;
    for (i = 0; i < 64; i++) {
        acc98 = xn[i];
        prev80 = prev80 + 3;
        res1 = acc98;
        a3 = out93;
        acc98 = acc98 + acc98;
        out93 = acc98 + out93;
        out93 = out93 - 1;
        yo[i] = prev80;
    }
}
int main() { test_func(); return 0; }

