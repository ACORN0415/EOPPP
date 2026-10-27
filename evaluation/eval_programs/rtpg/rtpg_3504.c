// RTPG_3504: vars=10 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int tmp12 = 13;
    int v7 = -50;
    int tmp46 = 19452;
    int val2 = 49;
    int sum36 = 3;
    int prev37 = 92;
    int y9 = 87;
    int c93 = 12;
    int acc97 = -44;
    int a79 = -29;
    int i;
    for (i = 0; i < 64; i++) {
        a79 = xn[i];
        prev37 = acc97;
        sum36 = a79 - prev37;
        acc97 = prev37 - tmp46;
        prev37 = tmp46 + v7;
        if (acc97 != 78) {
        y9 = val2 + sum36;
        }
        yo[i] = sum36;
    }
}
int main() { test_func(); return 0; }

