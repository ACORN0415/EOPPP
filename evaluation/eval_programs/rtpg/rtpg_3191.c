// RTPG_3191: vars=4 stmts=7
void test_func(void) {
    int tmp96 = 86;
    int cur90 = 40234;
    int z40 = 5813;
    int sum50 = 29;
    int *ptr = &z40;
    int i;
    for (i = 0; i < 81; i++) {
        tmp96 = tmp96 % sum50;
        cur90 = z40 + sum50;
        tmp96 = tmp96;
        sum50 = sum50 + 69;
        z40 = z40 - 1;
        tmp96 = z40 + 49;
        z40 = cur90 - z40;
        *ptr = *ptr + 3;
        if (z40 < 12) {
        tmp96 = tmp96 - 5;
        }
    }
}
int main() { test_func(); return 0; }

