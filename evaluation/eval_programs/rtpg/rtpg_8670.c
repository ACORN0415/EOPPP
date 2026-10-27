// RTPG_8670: vars=15 stmts=2
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int y0 = 43;
    int v1 = 42;
    int a86 = 11;
    int val59 = 5;
    int res55 = 38;
    int z65 = 82;
    int prev7 = 50878;
    int acc2 = 8;
    int prev54 = 9;
    int c97 = 36;
    int lo70 = 4;
    int prev45 = 8;
    int y49 = -35;
    int lo36 = 26586;
    int out16 = 2;
    int h0 = 8241;
    int sv0 = 0;
    int h1 = 21;
    int sv1 = 0;
    int h2 = 63;
    int sv2 = 0;
    int h3 = 37453;
    int sv3 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev54 = xn[i];
        prev45 = xn[idx_arr[i]];
        c97 = prev45 + val59;
        val59 = val59 + 3;
        yo[i] = y0;
    }
}
int main() { test_func(); return 0; }

