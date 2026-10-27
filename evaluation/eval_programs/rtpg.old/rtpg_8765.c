// RTPG_8765: vars=9 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int x44 = 59943;
    int acc62 = 43;
    int out80 = -15;
    int z40 = 7;
    int val50 = 17;
    int a79 = 10;
    int x14 = 76;
    int dat48 = 16;
    int cnt37 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        x44 = xn[i];
        z40 = dat48;
        a79 = x44 + 63;
        cnt37 = a79;
        a79 = a79 - 5;
        a79 = acc62 - x44;
        a79 = a79 - out80;
        out80 = dat48 - out80;
        x44 = acc62;
        if (out80 > 64738) goto done;
        yo[i] = dat48;
    }
done:
    val50 = 0;
}
int main() { test_func(); return 0; }

