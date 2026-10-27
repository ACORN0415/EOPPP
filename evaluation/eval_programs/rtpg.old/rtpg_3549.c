// RTPG_3549: vars=4 stmts=4
void test_func(void) {
    int dat48 = 64280;
    int res44 = -6;
    int cur90 = 35539;
    int b95 = 25;
    int i;
    for (i = 0; i < 29; i++) {
        dat48 = dat48 + 3;
        b95 = dat48 + cur90;
        dat48 = b95 - cur90;
        cur90 = cur90 + 1;
    }
}
int main() { test_func(); return 0; }

