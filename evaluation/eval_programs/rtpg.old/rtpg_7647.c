// RTPG_7647: vars=5 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int v1 = 3;
    int y92 = 5;
    int out48 = 50;
    int y40 = 3;
    int out54 = 15;
    int i;
    for (i = 0; i < 32; i++) {
        v1 = xn[i];
        y92 = out54 % v1;
        v1 = out54 - 3;
        y92 = out48 | out54;
        out54 = y92 % y92;
        y40 = y40 - 5;
        y40 = y40 / out54;
        yo[i] = v1;
    }
}
int main() { test_func(); return 0; }

