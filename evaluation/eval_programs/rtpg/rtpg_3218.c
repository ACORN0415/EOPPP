// RTPG_3218: vars=10 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int y0 = 2;
    int dat57 = 10;
    int cur83 = -12;
    int acc12 = 0;
    int b38 = -49;
    int a44 = 2;
    int hi44 = 0;
    int b45 = 27762;
    int tmp31 = 93;
    int c40 = 6815;
    int i;
    for (i = 0; i < 32; i++) {
        b38 = xn[i];
        b38 = hi44 - dat57;
        cur83 = y0;
        b45 = b45 - acc12;
        dat57 = acc12 - dat57;
        hi44 = hi44 + cur83;
        tmp31 = b45 + a44;
        b38 = cur83;
        if (tmp31 > 80) {
        a44 = tmp31 - y0;
        }
        yo[i] = cur83;
    }
}
int main() { test_func(); return 0; }

