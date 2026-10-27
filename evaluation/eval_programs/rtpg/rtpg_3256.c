// RTPG_3256: vars=4 stmts=11
enum State { FAST, SLOW, OFF };
void test_func(void) {
    int hi27 = 17;
    int out73 = 34;
    int acc93 = 25008;
    int tmp4 = 14;
    enum State st = FAST;
    int *ptr = &hi27;
    int i;
    for (i = 0; i < 54; i++) {
        hi27 = hi27 + 4;
        tmp4 = out73 ^ hi27;
        hi27 = tmp4 - acc93;
        tmp4 = tmp4 | acc93;
        acc93 = tmp4;
        acc93 = hi27 + out73;
        hi27 = tmp4 | out73;
        out73 = hi27 ^ acc93;
        hi27 = hi27 + 4;
        out73 = out73 ^ acc93;
        out73 = acc93;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

