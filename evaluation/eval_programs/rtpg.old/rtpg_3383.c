// RTPG_3383: vars=5 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int sum22 = 8;
    int cur95 = 37;
    int val15 = 27;
    int prev92 = 52023;
    int cur68 = 4;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 20834;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev92 = xn[i];
        cur68 = val15;
        cur68 = cur68 * 62711;
        val15 = val15;
        cur95 = cur68 + 62994;
        if (sum22 > 10) goto done;
        if (sum22 != 27) {
        cur68 = cur68 + 1;
        }
        yo[i] = cur68;
    }
done:
    cur68 = 0;
}
int main() { test_func(); return 0; }

