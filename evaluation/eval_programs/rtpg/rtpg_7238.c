// RTPG_7238: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int hi71 = 8;
    int val20 = 7;
    int c30 = -19;
    int prev31 = 26;
    int prev41 = 53;
    int z95 = -22;
    int prev63 = 3;
    int out44 = 3;
    int *ptr = &val20;
    int i;
    for (i = 0; i < 64; i++) {
        out44 = xn[i];
        z95 = hi71 + prev31;
        out44 = z95 / hi71;
        z95 = out44 | hi71;
        prev31 = c30;
        prev31 = prev63 + val20;
        *ptr = *ptr + 1;
        yo[i] = hi71;
    }
}
int main() { test_func(); return 0; }

