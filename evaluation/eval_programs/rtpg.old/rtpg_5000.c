// RTPG_5000: vars=3 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int cnt19 = 9;
    int z97 = 22802;
    int out45 = 14339;
    int *ptr = &z97;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 56029;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cnt19 = xn[i];
        cnt19 = xn[idx_arr[i]];
        z97 = out45 * 4;
        out45 = z97 * 7;
        z97 = z97 + 2;
        out45 = cnt19 * 3;
        *ptr = *ptr + 1;
        yo[i] = z97;
    }
}
int main() { test_func(); return 0; }

