// RTPG_5464: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int a92 = -32;
    int sum54 = -40;
    int v80 = -50;
    int v93 = 4;
    int i;
    for (i = 0; i < 16; i++) {
        v93 = xn[i];
        v93 = v80 - 11;
        v80 = a92 + v80;
        yo[i] = a92;
    }
}
int main() { test_func(); return 0; }

