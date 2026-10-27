// RTPG_458: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int dat34 = 9288;
    int cur92 = 1;
    int acc9 = 61798;
    int z0 = 60012;
    float b51 = 50.71;
    int dat87 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        acc9 = xn[i];
        b51 = acc9 - 5886;
        cur92 = z0 - 25;
        z0 = z0 + cur92;
        dat34 = cur92 - dat87;
        yo[i] = cur92;
    }
}
int main() { test_func(); return 0; }

