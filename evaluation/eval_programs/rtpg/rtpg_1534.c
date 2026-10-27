// RTPG_1534: vars=7 stmts=3
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int out74 = 57437;
    int dat97 = 4;
    int val14 = 47;
    int dat38 = 63360;
    int tmp17 = 37;
    int z60 = -27;
    int lo3 = -28;
    int i;
    for (i = 0; i < 32; i++) {
        out74 = xn[i];
        dat38 = xn[idx_arr[i]];
        tmp17 = tmp17;
        lo3 = z60 - tmp17;
        out74 = out74 - 3;
        yo[i] = z60;
    }
}
int main() { test_func(); return 0; }

