// RTPG_1323: vars=8 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int a39 = 38;
    int z69 = 73;
    int dat62 = 9;
    int cnt76 = 33;
    int tmp85 = 27;
    int res27 = 8;
    int y87 = 62907;
    int tmp64 = 7;
    int *ptr = &cnt76;
    int i;
    for (i = 0; i < 32; i++) {
        dat62 = xn[i];
        cnt76 = res27 + 4;
        res27 = cnt76 - z69;
        tmp64 = tmp64 + 2;
        y87 = z69 + 100;
        a39 = y87;
        z69 = cnt76;
        tmp64 = tmp64 + y87;
        *ptr = *ptr + 5;
        if (tmp85 != 91) {
        cnt76 = cnt76;
        }
        yo[i] = res27;
    }
}
int main() { test_func(); return 0; }

