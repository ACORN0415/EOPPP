// RTPG_1000: vars=7 stmts=3
void test_func(void) {
    int res67 = 23;
    int res29 = 4;
    int a81 = 40;
    int hi8 = 13;
    int a89 = 23;
    int cur70 = 3;
    int cur19 = 34;
    int *ptr = &cur19;
    int i;
    for (i = 0; i < 9; i++) {
        hi8 = a81 - cur70;
        hi8 = a89 - 1;
        cur70 = cur70 - 4;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

