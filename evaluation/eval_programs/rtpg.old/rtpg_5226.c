// RTPG_5226: vars=3 stmts=5
void test_func(void) {
    int val45 = 10165;
    int tmp6 = 44477;
    int dat64 = -15;
    int i;
    for (i = 0; i < 48; i++) {
        tmp6 = tmp6;
        val45 = tmp6 + dat64;
        dat64 = dat64;
        val45 = tmp6;
        val45 = val45 - tmp6;
    }
}
int main() { test_func(); return 0; }

