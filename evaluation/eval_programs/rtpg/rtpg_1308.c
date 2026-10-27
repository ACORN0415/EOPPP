// RTPG_1308: vars=3 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int hi46 = 44;
    int y3 = 57;
    int tmp17 = 35;
    int h0 = 62;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        hi46 = xn[i];
        y3 = hi46 & tmp17;
        tmp17 = tmp17 - 3;
        tmp17 = hi46 / tmp17;
        hi46 = hi46 + 3;
        yo[i] = tmp17;
    }
}
int main() { test_func(); return 0; }

