// RTPG_546: vars=6 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int a58 = 16;
    int res35 = 67;
    int z48 = 3;
    int res13 = 10;
    int b98 = -8;
    int v79 = 49;
    int i;
    for (i = 0; i < 32; i++) {
        b98 = xn[i];
        v79 = a58 - v79;
        b98 = b98 - 5;
        res35 = a58;
        yo[i] = res13;
    }
}
int main() { test_func(); return 0; }

