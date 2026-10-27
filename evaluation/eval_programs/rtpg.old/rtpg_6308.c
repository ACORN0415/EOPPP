// RTPG_6308: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int prev74 = 61532;
    int res82 = 8;
    int cnt86 = 8;
    int acc74 = 68;
    int dat95 = 38;
    int i;
    for (i = 0; i < 32; i++) {
        cnt86 = xn[i];
        acc74 = prev74;
        dat95 = dat95 + 4;
        dat95 = dat95;
        acc74 = acc74 - 4;
        yo[i] = res82;
    }
}
int main() { test_func(); return 0; }

