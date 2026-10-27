// RTPG_767: vars=4 stmts=3
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int z58 = 30098;
    int hi75 = 6;
    int cur95 = 63726;
    int x61 = 52842;
    int h0 = 56022;
    int sv0 = 0;
    int h1 = 39;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        x61 = xn[i];
        cur95 = xn[idx_arr[i]];
        hi75 = hi75 - cur95;
        hi75 = cur95 * 41975;
        x61 = hi75 * 8;
        yo[i] = cur95;
    }
}
int main() { test_func(); return 0; }

