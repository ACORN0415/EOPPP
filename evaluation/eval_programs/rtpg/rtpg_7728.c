// RTPG_7728: vars=5 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int v1 = 3;
    int y92 = 5;
    int out54 = 50;
    int y40 = 3;
    int out48 = 15;
    int i;
    for (i = 0; i < 32; i++) {
        v1 = xn[i];
        y92 = out48 % v1;
        v1 = out48 - 3;
        v1 = out54 % out48;
        out48 = y92 % out54;
        y40 = y40 - 5;
        v1 = y40 | v1;
        yo[i] = out54;
    }
}
int main() { test_func(); return 0; }

