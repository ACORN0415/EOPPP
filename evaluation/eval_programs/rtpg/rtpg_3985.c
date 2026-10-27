// RTPG_3985: vars=7 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int val8 = 35;
    int lo42 = -45;
    int dat39 = 2;
    int prev43 = 52722;
    int tmp85 = 7;
    int sum49 = 83;
    int z59 = 4;
    int i;
    for (i = 0; i < 16; i++) {
        prev43 = xn[i];
        dat39 = lo42 ^ prev43;
        dat39 = prev43 / z59;
        dat39 = val8;
        tmp85 = dat39 % tmp85;
        dat39 = z59 + z59;
        yo[i] = sum49;
    }
}
int main() { test_func(); return 0; }

