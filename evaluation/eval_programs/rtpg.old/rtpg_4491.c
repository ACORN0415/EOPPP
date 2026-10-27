// RTPG_4491: vars=10 stmts=3
void test_func(void) {
    int prev19 = -31;
    int cur17 = 37259;
    int res91 = 10;
    int sum87 = 50;
    int prev23 = 46;
    int b11 = 9;
    int res74 = 9589;
    int res50 = 78;
    int lo27 = 35;
    int res51 = 10;
    int *ptr = &sum87;
    int i;
    for (i = 0; i < 64; i++) {
        prev23 = prev19 + 25;
        cur17 = cur17 - 5;
        res50 = res50;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

