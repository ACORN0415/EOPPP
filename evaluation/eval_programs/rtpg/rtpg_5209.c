// RTPG_5209: vars=10 stmts=9
void test_func(void) {
    int val80 = 57047;
    int v92 = 9;
    int y94 = -47;
    int dat93 = 2;
    int sum2 = 2;
    int cnt95 = 17;
    int out92 = -12;
    int acc62 = 40;
    int acc93 = 2;
    int tmp38 = 2;
    int i;
    for (i = 0; i < 31; i++) {
        y94 = val80 - tmp38;
        out92 = val80;
        tmp38 = y94 + tmp38;
        cnt95 = out92;
        val80 = val80 - acc93;
        dat93 = acc62 + y94;
        out92 = sum2 - 15;
        acc62 = acc62 - 4;
        out92 = out92 - val80;
    }
}
int main() { test_func(); return 0; }

