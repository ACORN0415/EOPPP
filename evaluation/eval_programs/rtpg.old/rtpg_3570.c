// RTPG_3570: vars=7 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int val9 = 13409;
    int hi61 = 37511;
    int v96 = 2;
    int a28 = -48;
    int c94 = 59909;
    int y9 = 63717;
    int lo35 = 3;
    int i;
    for (i = 0; i < 64; i++) {
        y9 = xn[i];
        v96 = lo35 | a28;
        lo35 = val9 & val9;
        a28 = y9 | v96;
        c94 = hi61 - lo35;
        hi61 = val9 - 3;
        lo35 = lo35 - c94;
        if (v96 > 2) {
        c94 = val9 - a28;
        }
        yo[i] = lo35;
    }
}
int main() { test_func(); return 0; }

