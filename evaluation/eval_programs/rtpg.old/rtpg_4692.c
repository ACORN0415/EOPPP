// RTPG_4692: vars=7 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int res27 = 41;
    int sum92 = 19;
    int cnt44 = 66;
    int tmp85 = 27774;
    int acc14 = 52123;
    int b77 = 52416;
    int a36 = 28406;
    int i;
    for (i = 0; i < 16; i++) {
        cnt44 = xn[i];
        tmp85 = acc14 & a36;
        b77 = b77 - 5;
        a36 = b77 % tmp85;
        res27 = tmp85 ^ sum92;
        b77 = cnt44 + 28;
        if (cnt44 > 7) goto done;
        if (acc14 > 18) {
        acc14 = acc14;
        }
        yo[i] = cnt44;
    }
done:
    b77 = 0;
}
int main() { test_func(); return 0; }

