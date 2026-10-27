// RTPG_4829: vars=3 stmts=4
void test_func(void) {
    int prev91 = 2;
    int cur70 = 56444;
    int c96 = 9;
    int *ptr = &c96;
    int h0 = 19993;
    int sv0 = 0;
    int h1 = -41;
    int sv1 = 0;
    int i;
    for (i = 0; i < 74; i++) {
        c96 = c96;
        cur70 = cur70;
        c96 = prev91;
        c96 = prev91 - cur70;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

