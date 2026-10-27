// RTPG_9849: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int a4 = -28;
    int out29 = 10;
    int sum30 = 26;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        out29 = xn[i];
        sum30 = a4 * 10;
        a4 = a4 + sum30;
        sum30 = a4 * 77;
        a4 = a4 - 2;
        if (a4 > 30) {
        a4 = out29 + 15;
        }
        yo[i] = sum30;
    }
}
int main() { test_func(); return 0; }

