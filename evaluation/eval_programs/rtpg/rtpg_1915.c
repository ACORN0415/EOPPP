// RTPG_1915: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int dat20 = 34283;
    int dat23 = 87;
    int prev89 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat20 = xn[i];
        dat23 = dat23;
        dat23 = dat23 - 2617;
        prev89 = dat20 - 81;
        if (prev89 <= -41) {
        prev89 = dat20 + dat23;
        }
        yo[i] = dat20;
    }
}
int main() { test_func(); return 0; }

