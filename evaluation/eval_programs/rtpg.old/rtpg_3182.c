// RTPG_3182: vars=8 stmts=5
void test_func(void) {
    int dat38 = 3825;
    int v35 = 94;
    float out90 = 28.67;
    int cnt53 = 2;
    int x14 = 45804;
    int c69 = 61005;
    float out79 = 54.47;
    int prev10 = 79;
    int *ptr = &c69;
    int i;
    for (i = 0; i < 71; i++) {
        v35 = v35 - 5;
        prev10 = v35 + 23;
        out79 = out79;
        v35 = prev10 - out79;
        dat38 = dat38 + out79;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

