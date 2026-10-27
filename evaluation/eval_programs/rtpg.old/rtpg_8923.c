// RTPG_8923: vars=9 stmts=7
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int tmp89 = 50;
    int acc93 = 1;
    int x91 = 37313;
    int b47 = 29953;
    int prev84 = 21;
    int x42 = 53;
    int sum33 = -27;
    int sum63 = 28516;
    int c87 = 63;
    int i;
    for (i = 0; i < 32; i++) {
        acc93 = xn[i];
        prev84 = xn[idx_arr[i]];
        prev84 = prev84 - 2;
        sum33 = prev84 + acc93;
        sum63 = b47;
        x91 = prev84 + tmp89;
        c87 = acc93 + sum63;
        x42 = c87;
        x91 = tmp89;
        yo[i] = sum63;
    }
}
int main() { test_func(); return 0; }

