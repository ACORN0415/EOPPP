// RTPG_5204: vars=6 stmts=7
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int a72 = -14;
    int x9 = 8;
    int a15 = 4;
    int tmp49 = 7;
    int b92 = 60658;
    int c87 = 4;
    int h0 = -35;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int h2 = 42;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x9 = xn[i];
        b92 = xn[idx_arr[i]];
        x9 = a72 + a15;
        tmp49 = x9 - c87;
        a15 = b92;
        a15 = x9 * 73;
        a15 = b92 + -45;
        a15 = a15 + 2;
        x9 = x9 - tmp49;
        yo[i] = tmp49;
    }
}
int main() { test_func(); return 0; }

