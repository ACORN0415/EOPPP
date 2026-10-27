// RTPG_8016: vars=3 stmts=5
void test_func(void) {
    int a78 = -10;
    int cur75 = 1;
    int hi51 = -7;
    int i;
    for (i = 0; i < 53; i++) {
        a78 = a78 - cur75;
        a78 = cur75;
        cur75 = hi51 + a78;
        hi51 = a78 - hi51;
        cur75 = hi51 + a78;
        if (hi51 != -33) {
        cur75 = cur75 + 2;
        }
    }
}
int main() { test_func(); return 0; }

