// RTPG_7560: vars=8 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int sum42 = 4;
    int hi39 = 92;
    int cur76 = 6;
    int lo26 = 10;
    int cur21 = -20;
    int cur69 = 0;
    int val34 = 38;
    int tmp84 = 16427;
    int i;
    for (i = 0; i < 64; i++) {
        tmp84 = xn[i];
        lo26 = xn[idx_arr[i]];
        val34 = hi39 % val34;
        cur69 = cur21 + val34;
        cur69 = val34 - tmp84;
        hi39 = sum42 + val34;
        if (hi39 == -1) {
        hi39 = hi39 - 3;
        }
        yo[i] = cur69;
    }
}
int main() { test_func(); return 0; }

