// RTPG_218: vars=3 stmts=3
void test_func(void) {
    double dat98 = 62.55;
    int dat14 = 0;
    int sum77 = 53974;
    int i;
    for (i = 0; i < 71; i++) {
        dat98 = dat98 - 4;
        dat98 = dat98 - sum77;
        sum77 = sum77 + 2;
        if (dat14 != -25) {
        sum77 = dat98 + sum77;
        }
    }
}
int main() { test_func(); return 0; }

