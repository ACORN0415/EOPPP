// RTPG_2528: vars=4 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int z21 = 5701;
    int hi90 = 8;
    int v1 = 3;
    float acc53 = 61.52;
    int i;
    for (i = 0; i < 32; i++) {
        v1 = xn[i];
        acc53 = acc53 + z21;
        acc53 = acc53 + v1;
        hi90 = acc53 + v1;
        z21 = v1;
        acc53 = z21 + hi90;
        z21 = acc53;
        yo[i] = v1;
    }
}
int main() { test_func(); return 0; }

