// RTPG_5307: vars=3 stmts=3
void test_func(void) {
    int out64 = 41000;
    int cur40 = 35886;
    int acc21 = -15;
    int i;
    for (i = 0; i < 69; i++) {
        out64 = acc21 - 63160;
        cur40 = acc21;
        cur40 = acc21 + acc21;
    }
}
int main() { test_func(); return 0; }

