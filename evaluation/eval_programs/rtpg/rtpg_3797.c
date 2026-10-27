// RTPG_3797: vars=4 stmts=6
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int prev73 = 10;
    int prev83 = 7638;
    int val94 = 47522;
    int tmp53 = 47;
    int i;
    for (i = 0; i < 64; i++) {
        tmp53 = xn[i];
        prev83 = xn[idx_arr[i]];
        val94 = prev73 - val94;
        prev83 = prev83 + val94;
        prev83 = tmp53 - val94;
        prev83 = tmp53;
        val94 = val94 - prev73;
        prev73 = prev73;
        yo[i] = tmp53;
    }
}
int main() { test_func(); return 0; }

