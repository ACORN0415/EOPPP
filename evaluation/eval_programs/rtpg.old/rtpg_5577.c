// RTPG_5577: vars=10 stmts=5
void test_func(void) {
    int dat80 = 7;
    int dat39 = 100;
    int lo78 = 42;
    int hi11 = 39;
    int a46 = 40113;
    float cnt63 = 70.83;
    int hi93 = 44;
    int tmp84 = 1;
    int v31 = 93;
    int out73 = 4;
    int i;
    for (i = 0; i < 62; i++) {
        tmp84 = dat80 + cnt63;
        dat80 = v31;
        hi11 = a46 + tmp84;
        a46 = a46 + 5;
        dat39 = a46 - 1;
    }
}
int main() { test_func(); return 0; }

