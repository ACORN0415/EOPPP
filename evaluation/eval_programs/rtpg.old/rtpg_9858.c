// RTPG_9858: vars=7 stmts=5
void test_func(void) {
    int res1 = 36;
    int v28 = 18;
    int x17 = 7;
    int b65 = -20;
    int hi19 = 11746;
    int tmp7 = -28;
    int sum72 = 42;
    int *ptr = &hi19;
    int i;
    for (i = 0; i < 10; i++) {
        b65 = b65 + 2;
        v28 = res1;
        x17 = res1 - tmp7;
        tmp7 = x17 + sum72;
        x17 = b65 - 33;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

