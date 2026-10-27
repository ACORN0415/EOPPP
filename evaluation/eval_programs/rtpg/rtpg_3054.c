// RTPG_3054: vars=9 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int tmp12 = 9;
    int cur22 = 6826;
    int y46 = 1;
    int b97 = 2;
    int acc97 = 62;
    int prev85 = 53;
    int res82 = 4;
    int b26 = 21661;
    int b17 = 34;
    int i;
    for (i = 0; i < 32; i++) {
        res82 = xn[i];
        y46 = tmp12 - b97;
        acc97 = tmp12;
        b26 = b97 + b26;
        res82 = y46 + prev85;
        prev85 = tmp12 + 35549;
        yo[i] = b97;
    }
}
int main() { test_func(); return 0; }

