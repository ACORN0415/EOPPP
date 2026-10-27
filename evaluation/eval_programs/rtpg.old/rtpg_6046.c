// RTPG_6046: vars=5 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int c86 = 46;
    int cnt97 = 51393;
    int hi84 = 50000;
    int cur22 = 9;
    double sum63 = 44.33;
    int *ptr = &sum63;
    int i;
    for (i = 0; i < 64; i++) {
        cur22 = xn[i];
        cur22 = xn[idx_arr[i]];
        hi84 = c86 - hi84;
        c86 = c86;
        cur22 = hi84 - 5;
        c86 = c86 - 4;
        *ptr = *ptr + 1;
        if (cnt97 > 46) {
        sum63 = c86 + 46576;
        }
        yo[i] = cnt97;
    }
}
int main() { test_func(); return 0; }

