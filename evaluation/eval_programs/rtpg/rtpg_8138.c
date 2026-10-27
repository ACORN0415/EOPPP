// RTPG_8138: vars=9 stmts=5
int xn[16];
int yo[16];
struct Data { int a; int b; };
void test_func(void) {
    int b20 = 30855;
    int z88 = 99;
    int prev70 = 41978;
    int acc76 = 10;
    int hi55 = 9;
    int prev32 = 9;
    int tmp85 = 40;
    int prev90 = -42;
    int lo86 = 40736;
    struct Data s; s.a = 26019; s.b = 86;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 22585;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev70 = xn[i];
        lo86 = b20 * 18;
        prev70 = z88;
        tmp85 = tmp85 - 1;
        prev70 = tmp85 + -38;
        z88 = z88 - 5;
        s.a = s.a + s.b;
        yo[i] = hi55;
    }
}
int main() { test_func(); return 0; }

