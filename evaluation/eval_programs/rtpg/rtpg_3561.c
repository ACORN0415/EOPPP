// RTPG_3561: vars=4 stmts=4
void test_func(void) {
    int dat48 = 64280;
    int cur90 = -6;
    int b95 = 35539;
    int res44 = 25;
    int i;
    for (i = 0; i < 29; i++) {
        dat48 = dat48 + 3;
        res44 = dat48 + b95;
        dat48 = res44 - b95;
        b95 = b95 + 1;
    }
}
int main() { test_func(); return 0; }

