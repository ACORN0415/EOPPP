// RTPG_7550: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int sum89 = 4;
    int out66 = 6;
    double cur34 = 81.16;
    int *ptr = &out66;
    int h0 = 623;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        sum89 = xn[i];
        out66 = sum89 * 58652;
        out66 = sum89 * 0;
        cur34 = sum89 + out66;
        *ptr = *ptr + 3;
        yo[i] = cur34;
    }
}
int main() { test_func(); return 0; }

