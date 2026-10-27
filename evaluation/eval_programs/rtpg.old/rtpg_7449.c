// RTPG_7449: vars=29 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int hi92 = 10;
    int out69 = 11;
    int y35 = 43;
    int out1 = 31281;
    int y18 = 22396;
    int val59 = 25639;
    int dat97 = -11;
    int dat33 = 43;
    int acc17 = 41;
    int z32 = 2;
    int cnt86 = 10;
    int v24 = 41554;
    int c36 = 10;
    int cur98 = 33045;
    int z97 = 32;
    int x35 = 0;
    int x91 = 1;
    int val19 = 21766;
    int a77 = 43762;
    int c96 = 6;
    int cur72 = 7;
    int c52 = 8;
    int v50 = 6;
    int out62 = 26024;
    int out64 = 10;
    int z20 = 3;
    int dat73 = 40160;
    int y20 = 19;
    int dat79 = 1;
    int *ptr = &acc17;
    int i;
    for (i = 0; i < 16; i++) {
        dat73 = xn[i];
        cur98 = z20 + 7;
        out69 = dat79 % v50;
        z32 = c96 % cur98;
        out69 = y20 - val19;
        out69 = x35 & cnt86;
        *ptr = *ptr + 2;
        if (c36 > 34) goto done;
        yo[i] = z97;
    }
done:
    cur98 = 0;
}
int main() { test_func(); return 0; }

