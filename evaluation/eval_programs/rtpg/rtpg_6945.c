// RTPG_6945: vars=3 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int b44 = 41;
    int c0 = 74;
    int tmp50 = 1;
    int i;
    for (i = 0; i < 64; i++) {
        b44 = xn[i];
        c0 = b44;
        tmp50 = tmp50 - b44;
        c0 = c0 - tmp50;
        c0 = c0 + 8817;
        b44 = b44 - 5;
        c0 = b44 - tmp50;
        tmp50 = b44;
        tmp50 = tmp50 - 3;
        b44 = b44 - 2;
        if (c0 > -45) goto done;
        yo[i] = c0;
    }
done:
    b44 = 0;
}
int main() { test_func(); return 0; }

