// RTPG_2242: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int sum70 = 2;
    int x83 = 55;
    int tmp9 = 44754;
    int sum92 = 2;
    int v64 = -44;
    int h0 = 7;
    int sv0 = 0;
    int h1 = -46;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        v64 = xn[i];
        tmp9 = v64 / x83;
        tmp9 = sum70 | v64;
        tmp9 = tmp9 - 22;
        sum70 = sum70 / sum92;
        sum92 = sum70 / sum92;
        yo[i] = sum70;
    }
}
int main() { test_func(); return 0; }

