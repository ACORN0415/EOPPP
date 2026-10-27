// RTPG_2632: vars=3 stmts=3
int idx_arr[64];
void test_func(void) {
    int z28 = 20;
    int a61 = 2;
    int val18 = 70;
    int *ptr = &a61;
    int i;
    for (i = 0; i < 44; i++) {
        val18 = xn[idx_arr[i]];
        val18 = val18 + 3;
        a61 = val18 - -36;
        val18 = z28 - 30549;
        *ptr = *ptr + 2;
        if (z28 > 27921) goto done;
        if (a61 > 8) {
        z28 = z28 + 5;
        }
    }
done:
    z28 = 0;
}
int main() { test_func(); return 0; }

