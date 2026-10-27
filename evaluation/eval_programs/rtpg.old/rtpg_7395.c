// RTPG_7395: vars=10 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int a5 = 9;
    int v66 = 18;
    int z50 = 29959;
    int cur29 = 7;
    int y97 = 44954;
    int out41 = 0;
    int dat7 = 5;
    int res75 = -32;
    int b64 = 7;
    int cnt28 = -24;
    int i;
    for (i = 0; i < 16; i++) {
        cur29 = xn[i];
        b64 = b64 + 1;
        res75 = a5;
        cnt28 = out41;
        z50 = z50 + 5;
        if (dat7 < 12) {
        res75 = dat7 - out41;
        }
        yo[i] = v66;
    }
}
int main() { test_func(); return 0; }

