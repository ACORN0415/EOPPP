// RTPG_2103: vars=9 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int x53 = -10;
    int cur82 = -19;
    int val64 = 55;
    double z32 = 17.68;
    int tmp52 = 0;
    int v85 = 8;
    int out32 = 9;
    int z89 = 15528;
    int prev84 = 14;
    int i;
    for (i = 0; i < 64; i++) {
        z32 = xn[i];
        out32 = x53 - prev84;
        z89 = cur82 - out32;
        prev84 = z32;
        v85 = val64 + v85;
        val64 = tmp52 + 56192;
        yo[i] = val64;
    }
}
int main() { test_func(); return 0; }

