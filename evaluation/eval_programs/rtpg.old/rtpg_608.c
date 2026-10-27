// RTPG_608: vars=4 stmts=4
void test_func(void) {
    int dat58 = 24;
    int y70 = 11707;
    int res93 = 4432;
    int x63 = 65198;
    int h0 = 31;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 22; i++) {
        x63 = res93 + x63;
        res93 = dat58 + y70;
        res93 = y70 * 4;
        x63 = res93 * 16022;
        if (res93 > 6) goto done;
        if (x63 <= 94) {
        x63 = x63 - y70;
        }
    }
done:
    dat58 = 0;
}
int main() { test_func(); return 0; }

