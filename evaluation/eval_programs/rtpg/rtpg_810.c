// RTPG_810: vars=4 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    float cnt11 = 30.80;
    int hi97 = 18;
    int res43 = 24205;
    float prev92 = 79.74;
    int i;
    for (i = 0; i < 64; i++) {
        prev92 = xn[i];
        cnt11 = xn[idx_arr[i]];
        cnt11 = cnt11 - 1;
        hi97 = prev92 - cnt11;
        hi97 = res43 - res43;
        res43 = res43 - 1;
        yo[i] = prev92;
    }
}
int main() { test_func(); return 0; }

