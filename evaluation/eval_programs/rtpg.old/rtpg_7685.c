// RTPG_7685: vars=9 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int cnt50 = 4;
    int z95 = 32;
    int val35 = 9;
    int out23 = 84;
    int y86 = 4;
    int acc17 = 9;
    int out63 = 2;
    int hi32 = 12;
    int x74 = -10;
    int i;
    for (i = 0; i < 16; i++) {
        z95 = xn[i];
        hi32 = out63 & y86;
        y86 = y86 + 1;
        cnt50 = out63;
        cnt50 = val35 - cnt50;
        val35 = acc17;
        out23 = val35 + x74;
        acc17 = out23 / hi32;
        val35 = hi32 + 56417;
        val35 = z95 % y86;
        hi32 = val35 | out63;
        hi32 = hi32 - 4;
        z95 = out23 ^ cnt50;
        if (val35 > 74) goto done;
        yo[i] = y86;
    }
done:
    y86 = 0;
}
int main() { test_func(); return 0; }

