// RTPG_4190: vars=9 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int x41 = 40759;
    int lo42 = 71;
    int a10 = 4;
    int z29 = 4930;
    int c91 = -17;
    int b49 = 6;
    int res62 = 100;
    int lo67 = 1;
    int sum50 = 68;
    int i;
    for (i = 0; i < 16; i++) {
        res62 = xn[i];
        lo42 = lo42 - 1;
        a10 = a10 - 5;
        if (res62 < -1) {
        lo67 = lo42 + res62;
        }
        yo[i] = sum50;
    }
}
int main() { test_func(); return 0; }

