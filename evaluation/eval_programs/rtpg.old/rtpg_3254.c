// RTPG_3254: vars=4 stmts=11
enum State { FAST, SLOW, OFF };
void test_func(void) {
    int acc93 = 17;
    int hi27 = 34;
    int tmp4 = 25008;
    int out73 = 14;
    enum State st = FAST;
    int *ptr = &acc93;
    int i;
    for (i = 0; i < 54; i++) {
        acc93 = acc93 + 4;
        out73 = hi27 ^ acc93;
        acc93 = out73 - tmp4;
        hi27 = out73 | out73;
        tmp4 = tmp4 - 4;
        out73 = out73 + hi27;
        tmp4 = acc93 + out73;
        hi27 = acc93 + out73;
        hi27 = hi27 ^ tmp4;
        hi27 = tmp4;
        hi27 = hi27 - 33962;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

