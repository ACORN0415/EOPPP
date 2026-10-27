// RTPG_7768: vars=9 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int acc17 = 4;
    int x74 = 32;
    int hi32 = 9;
    int out23 = 84;
    int cnt50 = 4;
    int val35 = 9;
    int z95 = 2;
    int out63 = 12;
    int y86 = -10;
    int i;
    for (i = 0; i < 16; i++) {
        x74 = xn[i];
        out63 = z95 & cnt50;
        cnt50 = cnt50 + 1;
        acc17 = z95;
        acc17 = hi32 - acc17;
        hi32 = val35;
        out23 = hi32 + y86;
        val35 = out23 / y86;
        hi32 = out63 + 56417;
        hi32 = x74 % val35;
        out63 = hi32 | out63;
        out63 = out63 - 4;
        x74 = out23 ^ acc17;
        if (hi32 > 74) goto done;
        yo[i] = cnt50;
    }
done:
    cnt50 = 0;
}
int main() { test_func(); return 0; }

