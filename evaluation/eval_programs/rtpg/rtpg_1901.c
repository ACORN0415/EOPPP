// RTPG_1901: vars=9 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int z98 = -4;
    int val68 = 8;
    int hi52 = 10215;
    int hi24 = 42;
    int cnt54 = 71;
    int acc54 = 33;
    int x87 = 33632;
    int z61 = 5;
    int hi93 = 59743;
    int i;
    for (i = 0; i < 64; i++) {
        hi24 = xn[i];
        hi52 = hi52 + 4;
        acc54 = acc54 - 2;
        x87 = acc54;
        hi93 = hi93 + x87;
        hi52 = z61;
        yo[i] = val68;
    }
}
int main() { test_func(); return 0; }

