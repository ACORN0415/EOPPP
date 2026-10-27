// RTPG_598: vars=4 stmts=4
void test_func(void) {
    int x63 = 24;
    int res93 = 11707;
    int y70 = 4432;
    int dat58 = 65198;
    int h0 = 31;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 22; i++) {
        dat58 = y70 + dat58;
        y70 = x63 + res93;
        y70 = res93 * 4;
        dat58 = y70 * 16022;
        if (y70 > 6) goto done;
        if (dat58 <= 94) {
        dat58 = dat58 - res93;
        }
    }
done:
    x63 = 0;
}
int main() { test_func(); return 0; }

