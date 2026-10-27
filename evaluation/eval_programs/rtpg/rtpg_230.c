// RTPG_230: vars=3 stmts=3
void test_func(void) {
    int acc90 = -44;
    int sum69 = 29396;
    float res4 = 0.65;
    int *ptr = &sum69;
    int i;
    for (i = 0; i < 9; i++) {
        sum69 = acc90;
        acc90 = res4 - acc90;
        sum69 = sum69 - 0;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

