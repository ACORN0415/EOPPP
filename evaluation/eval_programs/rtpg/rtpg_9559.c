// RTPG_9559: vars=6 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int x93 = 26;
    int val94 = 4037;
    int c6 = -18;
    int cnt58 = 95;
    int cur11 = 20;
    int v71 = 21;
    int i;
    for (i = 0; i < 32; i++) {
        v71 = xn[i];
        cur11 = v71 - c6;
        cnt58 = c6 + cur11;
        c6 = v71 - val94;
        v71 = val94;
        c6 = c6 - 2;
        if (val94 < -39) {
        c6 = c6 + 2;
        }
        yo[i] = v71;
    }
}
int main() { test_func(); return 0; }

