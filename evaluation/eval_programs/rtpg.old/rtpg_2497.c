// RTPG_2497: vars=3 stmts=3
void test_func(void) {
    int sum1 = 7;
    int tmp69 = 44;
    int z31 = 22;
    int *ptr = &z31;
    int i;
    for (i = 0; i < 31; i++) {
        z31 = sum1 + -17;
        tmp69 = sum1;
        sum1 = sum1;
        *ptr = *ptr + 1;
        if (z31 == 92) {
        sum1 = sum1 - sum1;
        }
    }
}
int main() { test_func(); return 0; }

