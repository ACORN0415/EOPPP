// RTPG_8405: vars=8 stmts=4
void test_func(void) {
    int tmp34 = 8;
    int lo74 = 84;
    int val19 = 68;
    int a31 = 1;
    int res41 = 35437;
    int cur5 = 58807;
    int res65 = 59004;
    int prev65 = 48751;
    int *ptr = &lo74;
    int i;
    for (i = 0; i < 40; i++) {
        prev65 = prev65 - 2;
        cur5 = cur5 - 4;
        res41 = res41 + prev65;
        res65 = lo74 + res41;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

