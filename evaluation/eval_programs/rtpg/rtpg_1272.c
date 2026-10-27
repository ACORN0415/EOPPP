// RTPG_1272: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int b3 = -48;
    int z37 = 8143;
    int y40 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        y40 = xn[i];
        z37 = z37 - y40;
        b3 = z37 + b3;
        y40 = y40 + z37;
        yo[i] = b3;
    }
}
int main() { test_func(); return 0; }

