// RTPG_7515: vars=5 stmts=2
void test_func(void) {
    int cnt3 = 61373;
    int b63 = 42052;
    int res0 = 10;
    int acc62 = 70;
    int c20 = 67;
    int i;
    for (i = 0; i < 24; i++) {
        res0 = res0 - 5;
        acc62 = res0 + cnt3;
    }
}
int main() { test_func(); return 0; }

