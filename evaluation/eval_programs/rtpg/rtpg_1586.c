// RTPG_1586: vars=6 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int z8 = 22;
    int val81 = -5;
    int out73 = 23694;
    int lo53 = -46;
    int out12 = 5;
    int a76 = 42;
    int i;
    for (i = 0; i < 64; i++) {
        a76 = xn[i];
        out12 = out12 + 1;
        lo53 = lo53 - 3;
        a76 = z8 + out12;
        lo53 = lo53;
        a76 = val81;
        out12 = out12 + 4;
        out73 = lo53;
        lo53 = val81 - 16024;
        val81 = lo53 - val81;
        a76 = out12 - z8;
        val81 = a76 - 52611;
        a76 = z8 - lo53;
        yo[i] = z8;
    }
}
int main() { test_func(); return 0; }

