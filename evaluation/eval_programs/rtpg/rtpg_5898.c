// RTPG_5898: vars=3 stmts=3
void test_func(void) {
    int hi14 = 4;
    int acc75 = 8;
    int out1 = -39;
    int i;
    for (i = 0; i < 43; i++) {
        acc75 = acc75 - 2;
        acc75 = acc75;
        hi14 = hi14 + 1;
    }
}
int main() { test_func(); return 0; }

