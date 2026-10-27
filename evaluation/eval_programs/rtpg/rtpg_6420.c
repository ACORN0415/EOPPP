// RTPG_6420: vars=10 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int hi61 = 74;
    int cur82 = 1;
    int y72 = 4;
    int val16 = 85;
    int y25 = 59411;
    int tmp38 = 48250;
    int x38 = 7;
    int cur11 = 53;
    int y38 = -24;
    int lo33 = 11;
    int i;
    for (i = 0; i < 64; i++) {
        lo33 = xn[i];
        y25 = y72;
        y38 = cur82;
        y38 = y38 - 1;
        x38 = y25 ^ lo33;
        if (y72 > 98) goto done;
        yo[i] = cur11;
    }
done:
    y25 = 0;
}
int main() { test_func(); return 0; }

