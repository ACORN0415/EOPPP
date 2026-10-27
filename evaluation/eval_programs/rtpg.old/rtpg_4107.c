// RTPG_4107: vars=10 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int acc79 = 13;
    int val66 = 41451;
    int x49 = 4;
    int lo70 = -43;
    int hi36 = 7;
    int cnt80 = -35;
    int b21 = 63553;
    int prev92 = 26507;
    int val25 = 7;
    int acc30 = 57230;
    int *ptr = &x49;
    int h0 = 5203;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b21 = xn[i];
        b21 = xn[idx_arr[i]];
        cnt80 = lo70 + b21;
        acc79 = hi36 + x49;
        x49 = hi36 * 9;
        acc30 = prev92 * 62800;
        *ptr = *ptr + 5;
        yo[i] = prev92;
    }
}
int main() { test_func(); return 0; }

