// RTPG_7261: vars=3 stmts=4
void test_func(void) {
    int a95 = 63;
    int acc39 = 31;
    int dat57 = 19;
    int i;
    for (i = 0; i < 24; i++) {
        dat57 = dat57;
        acc39 = acc39 - 5;
        dat57 = acc39;
        acc39 = a95 - acc39;
    }
}
int main() { test_func(); return 0; }

