// RTPG_8617: vars=3 stmts=5
void test_func(void) {
    int cur8 = 62560;
    int val80 = 7;
    int x75 = 92;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 78; i++) {
        cur8 = cur8 + 1;
        cur8 = cur8 + x75;
        val80 = val80 - -20;
        val80 = val80 - cur8;
        val80 = x75 * 39;
        if (cur8 > 90) goto done;
        if (val80 != -28) {
        cur8 = cur8 - 81;
        }
    }
done:
    cur8 = 0;
}
int main() { test_func(); return 0; }

