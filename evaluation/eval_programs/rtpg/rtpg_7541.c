// RTPG_7541: vars=8 stmts=8
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int val82 = -46;
    int dat50 = 65;
    int res63 = 3;
    int y1 = -32;
    int z66 = 6;
    int acc10 = 4133;
    int tmp73 = 24800;
    int sum16 = 1;
    int i;
    for (i = 0; i < 64; i++) {
        tmp73 = xn[i];
        tmp73 = xn[idx_arr[i]];
        z66 = sum16 | acc10;
        y1 = acc10 % sum16;
        sum16 = dat50;
        tmp73 = res63 - y1;
        y1 = val82 + acc10;
        res63 = z66;
        dat50 = res63 - tmp73;
        z66 = res63 - val82;
        if (y1 == 4) {
        z66 = y1 - 34287;
        }
        yo[i] = tmp73;
    }
}
int main() { test_func(); return 0; }

