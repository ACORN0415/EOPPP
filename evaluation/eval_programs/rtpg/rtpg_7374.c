// RTPG_7374: vars=8 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int cnt30 = 26725;
    int lo23 = 34;
    int prev56 = 96;
    int x0 = 52806;
    int z52 = 92;
    int b24 = 70;
    int dat2 = -5;
    int sum44 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        sum44 = xn[i];
        b24 = xn[idx_arr[i]];
        x0 = lo23;
        dat2 = z52 - x0;
        x0 = lo23;
        b24 = cnt30 + sum44;
        yo[i] = x0;
    }
}
int main() { test_func(); return 0; }

