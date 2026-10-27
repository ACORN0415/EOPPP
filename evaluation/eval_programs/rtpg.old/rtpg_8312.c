// RTPG_8312: vars=3 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int z76 = 11;
    int z90 = 87;
    int z92 = 29799;
    int h0 = 55295;
    int sv0 = 0;
    int h1 = -41;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        z90 = xn[i];
        z90 = z92 + z76;
        z76 = z76 | z90;
        z92 = z76 ^ z76;
        yo[i] = z90;
    }
}
int main() { test_func(); return 0; }

