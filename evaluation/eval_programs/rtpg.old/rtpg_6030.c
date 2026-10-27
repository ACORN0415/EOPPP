// RTPG_6030: vars=10 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int acc61 = 30;
    int v51 = -39;
    int prev9 = -32;
    int c35 = 9;
    int cnt87 = 44;
    int sum47 = 38;
    int dat64 = 0;
    int z46 = 12;
    int cnt22 = 25187;
    int tmp67 = -34;
    int i;
    for (i = 0; i < 64; i++) {
        tmp67 = xn[i];
        c35 = xn[idx_arr[i]];
        z46 = tmp67 - sum47;
        cnt22 = cnt22 + z46;
        dat64 = cnt22 | z46;
        dat64 = cnt87 - c35;
        if (dat64 > 78) goto done;
        yo[i] = v51;
    }
done:
    z46 = 0;
}
int main() { test_func(); return 0; }

