// RTPG_1331: vars=8 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int res27 = 38;
    int y87 = 73;
    int z69 = 9;
    int tmp64 = 33;
    int dat62 = 27;
    int tmp85 = 8;
    int a39 = 62907;
    int cnt76 = 7;
    int *ptr = &tmp64;
    int i;
    for (i = 0; i < 32; i++) {
        z69 = xn[i];
        tmp64 = tmp85 + 4;
        tmp85 = tmp64 - y87;
        cnt76 = cnt76 + 2;
        a39 = y87 + 100;
        res27 = a39;
        y87 = tmp64;
        cnt76 = cnt76 + a39;
        *ptr = *ptr + 5;
        if (dat62 != 91) {
        tmp64 = tmp64;
        }
        yo[i] = tmp85;
    }
}
int main() { test_func(); return 0; }

