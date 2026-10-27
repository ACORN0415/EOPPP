// RTPG_229: vars=3 stmts=3
void test_func(void) {
    int sum69 = -44;
    int acc90 = 29396;
    float res4 = 0.65;
    int *ptr = &acc90;
    int i;
    for (i = 0; i < 9; i++) {
        acc90 = sum69;
        sum69 = res4 - sum69;
        acc90 = acc90 - 0;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

