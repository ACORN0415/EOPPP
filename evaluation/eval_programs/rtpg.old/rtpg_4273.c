// RTPG_4273: vars=10 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int acc43 = 12;
    int val0 = 17;
    int a13 = -32;
    int b61 = 7;
    int y6 = 24291;
    int prev67 = 33023;
    int z6 = 39678;
    int res94 = 8;
    int acc21 = 17;
    int z82 = 57;
    int i;
    for (i = 0; i < 32; i++) {
        b61 = xn[i];
        acc43 = acc43 - 1;
        val0 = val0 - z6;
        b61 = b61 + 2;
        acc21 = acc43 + prev67;
        acc43 = acc43 - 5;
        a13 = b61 + res94;
        b61 = b61 + 4;
        if (z6 != 57) {
        prev67 = prev67 - 2;
        }
        yo[i] = a13;
    }
}
int main() { test_func(); return 0; }

