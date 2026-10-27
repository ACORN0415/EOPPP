// RTPG_5792: vars=9 stmts=5
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int c75 = 3;
    int prev69 = 7;
    int c1 = 43;
    int sum19 = -37;
    int z45 = 16;
    int a9 = 66;
    int acc75 = 2;
    int hi59 = 38245;
    int c23 = 57474;
    int h0 = 30005;
    int sv0 = 0;
    int h1 = 59362;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        sum19 = xn[i];
        z45 = xn[idx_arr[i]];
        prev69 = sum19 * 4;
        sum19 = sum19 + 4;
        a9 = prev69 ^ acc75;
        c23 = c23 + 4;
        prev69 = prev69 - 4;
        yo[i] = sum19;
    }
}
int main() { test_func(); return 0; }

