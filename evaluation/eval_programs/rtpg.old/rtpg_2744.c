// RTPG_2744: vars=6 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    float c71 = 28.95;
    int dat68 = 10;
    int cur9 = 17035;
    int z92 = 10;
    float c63 = 0.66;
    int tmp8 = 31284;
    int i;
    for (i = 0; i < 16; i++) {
        cur9 = xn[i];
        dat68 = dat68 - 1;
        z92 = c71 + dat68;
        if (z92 <= -47) {
        tmp8 = tmp8;
        }
        yo[i] = tmp8;
    }
}
int main() { test_func(); return 0; }

