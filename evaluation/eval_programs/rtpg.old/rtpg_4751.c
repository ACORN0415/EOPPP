// RTPG_4751: vars=4 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int z73 = -32;
    int dat73 = 5;
    int y51 = 51857;
    int acc70 = 46;
    int i;
    for (i = 0; i < 16; i++) {
        z73 = xn[i];
        dat73 = dat73 - 3;
        dat73 = y51 / z73;
        dat73 = y51 / dat73;
        acc70 = acc70 - 2;
        acc70 = z73 - acc70;
        z73 = dat73 | z73;
        acc70 = y51 / acc70;
        z73 = acc70 & dat73;
        yo[i] = dat73;
    }
}
int main() { test_func(); return 0; }

