// RTPG_5429: vars=5 stmts=3
void test_func(void) {
    int prev67 = 47;
    int cur42 = 0;
    int prev17 = 6;
    int res7 = -12;
    int a76 = 49;
    int *ptr = &res7;
    int i;
    for (i = 0; i < 21; i++) {
        a76 = prev17 + res7;
        a76 = prev67;
        res7 = prev67 - res7;
        *ptr = *ptr + 2;
        if (prev17 > -9) {
        cur42 = res7 - a76;
        }
    }
}
int main() { test_func(); return 0; }

