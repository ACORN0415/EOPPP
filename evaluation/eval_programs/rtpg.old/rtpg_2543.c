// RTPG_2543: vars=4 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int hi90 = 5701;
    int v1 = 8;
    int z21 = 3;
    float acc53 = 61.52;
    int i;
    for (i = 0; i < 32; i++) {
        z21 = xn[i];
        acc53 = acc53 + hi90;
        acc53 = acc53 + z21;
        v1 = acc53 + z21;
        hi90 = z21;
        acc53 = hi90 + v1;
        hi90 = acc53;
        yo[i] = z21;
    }
}
int main() { test_func(); return 0; }

