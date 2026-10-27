// RTPG_3394: vars=5 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int sum22 = 8;
    int val15 = 37;
    int cur68 = 27;
    int cur95 = 52023;
    int prev92 = 4;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 20834;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur95 = xn[i];
        prev92 = cur68;
        prev92 = prev92 * 62711;
        cur68 = cur68;
        val15 = prev92 + 62994;
        if (sum22 > 10) goto done;
        if (sum22 != 27) {
        prev92 = prev92 + 1;
        }
        yo[i] = prev92;
    }
done:
    prev92 = 0;
}
int main() { test_func(); return 0; }

