// RTPG_362: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int val30 = 10;
    int tmp3 = -20;
    int out78 = 78;
    int i;
    for (i = 0; i < 16; i++) {
        tmp3 = xn[i];
        out78 = out78 + 17368;
        out78 = tmp3 - val30;
        val30 = val30;
        val30 = val30;
        if (out78 > 84) {
        out78 = tmp3 + -14;
        }
        yo[i] = val30;
    }
}
int main() { test_func(); return 0; }

