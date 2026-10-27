// RTPG_9777: vars=3 stmts=5
int idx_arr[16];
void test_func(void) {
    int a9 = 37;
    int b23 = -39;
    int v28 = 11291;
    int *ptr = &a9;
    int i;
    for (i = 0; i < 83; i++) {
        b23 = xn[idx_arr[i]];
        a9 = a9 + a9;
        a9 = a9 - 3;
        a9 = b23 + v28;
        b23 = b23 + a9;
        v28 = v28 - 13;
        *ptr = *ptr + 4;
        if (a9 > 59) goto done;
        if (a9 != 37) {
        b23 = v28 + v28;
        }
    }
done:
    b23 = 0;
}
int main() { test_func(); return 0; }

