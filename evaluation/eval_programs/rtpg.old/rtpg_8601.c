// RTPG_8601: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int b97 = 9;
    int z95 = 0;
    int cur36 = 25;
    int v92 = 1;
    int z5 = 8;
    int cnt23 = 46;
    int i;
    for (i = 0; i < 16; i++) {
        v92 = xn[i];
        v92 = v92 + 1;
        cnt23 = v92 + z95;
        z5 = z5 - 2;
        z5 = cnt23 + 30;
        yo[i] = v92;
    }
}
int main() { test_func(); return 0; }

