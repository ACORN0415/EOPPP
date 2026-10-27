// RTPG_2182: vars=4 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int res31 = 15;
    int y28 = 10;
    int x5 = 14070;
    int tmp74 = 42;
    int i;
    for (i = 0; i < 16; i++) {
        tmp74 = xn[i];
        y28 = tmp74 - 10;
        x5 = x5 + 5;
        res31 = x5;
        tmp74 = y28;
        tmp74 = tmp74 + 2;
        res31 = res31 - 4;
        res31 = x5;
        if (x5 != -11) {
        res31 = y28;
        }
        yo[i] = y28;
    }
}
int main() { test_func(); return 0; }

