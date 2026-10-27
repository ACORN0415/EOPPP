// RTPG_5394: vars=5 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int acc9 = -42;
    int res14 = 70;
    int x56 = 2513;
    int dat43 = 2289;
    int dat95 = 14300;
    int i;
    for (i = 0; i < 64; i++) {
        dat43 = xn[i];
        dat95 = dat95 + res14;
        dat43 = res14;
        res14 = acc9;
        yo[i] = acc9;
    }
}
int main() { test_func(); return 0; }

