// RTPG_1923: vars=5 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int c81 = 39843;
    int v64 = 12;
    int sum23 = 31;
    int dat31 = 5;
    int sum38 = 816;
    int i;
    for (i = 0; i < 64; i++) {
        v64 = xn[i];
        sum23 = c81 + 503;
        c81 = dat31 + 57;
        sum38 = dat31 - sum23;
        c81 = sum23 - sum38;
        dat31 = c81 + sum23;
        sum38 = sum38 + c81;
        c81 = sum23 + dat31;
        yo[i] = sum38;
    }
}
int main() { test_func(); return 0; }

