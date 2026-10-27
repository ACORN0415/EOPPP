// RTPG_5270: vars=5 stmts=5
void test_func(void) {
    int tmp5 = 8;
    int cnt3 = 5872;
    int hi23 = 3;
    int c5 = -33;
    int res25 = 1031;
    int *ptr = &hi23;
    int i;
    for (i = 0; i < 23; i++) {
        cnt3 = cnt3 ^ tmp5;
        hi23 = cnt3 - 74;
        cnt3 = c5 & hi23;
        hi23 = c5 - hi23;
        c5 = res25 + 3;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

