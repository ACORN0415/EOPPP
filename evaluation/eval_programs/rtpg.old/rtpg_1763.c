// RTPG_1763: vars=10 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int acc94 = 36258;
    int z56 = 45;
    int hi79 = 17;
    int cnt92 = 21;
    int dat13 = 53;
    int z25 = 3;
    int y44 = -23;
    int x92 = 63;
    int z48 = 20487;
    int prev5 = 14412;
    int i;
    for (i = 0; i < 64; i++) {
        prev5 = xn[i];
        z48 = prev5 + y44;
        acc94 = acc94 - 4;
        x92 = z48 - dat13;
        acc94 = dat13;
        y44 = z56 + z25;
        yo[i] = z48;
    }
}
int main() { test_func(); return 0; }

