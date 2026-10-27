// RTPG_1437: vars=3 stmts=3
void test_func(void) {
    int x31 = 75;
    int c27 = -16;
    int lo17 = 43880;
    int *ptr = &x31;
    int i;
    for (i = 0; i < 69; i++) {
        x31 = lo17;
        x31 = x31 - 1;
        c27 = c27 + c27;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

