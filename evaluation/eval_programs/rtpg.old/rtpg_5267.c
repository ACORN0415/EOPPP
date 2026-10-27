// RTPG_5267: vars=4 stmts=7
void test_func(void) {
    int acc22 = 36700;
    int lo75 = 3;
    int hi82 = -24;
    int y89 = -21;
    int i;
    for (i = 0; i < 72; i++) {
        hi82 = lo75 - 4370;
        acc22 = y89 - lo75;
        acc22 = hi82 - acc22;
        lo75 = hi82 - -4;
        lo75 = lo75 + 3;
        hi82 = acc22 - hi82;
        y89 = hi82 - 73;
    }
done:
    lo75 = 0;
}
int main() { test_func(); return 0; }

