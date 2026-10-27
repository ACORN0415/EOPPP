// RTPG_7073: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int y44 = 56;
    int z18 = -46;
    int x18 = 9;
    int hi51 = 41700;
    int i;
    for (i = 0; i < 16; i++) {
        hi51 = xn[i];
        hi51 = z18 + x18;
        z18 = hi51 + y44;
        yo[i] = hi51;
    }
}
int main() { test_func(); return 0; }

