// RTPG_6920: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int val53 = 1;
    int res99 = -33;
    int a31 = -35;
    int z70 = 12;
    int cur28 = 61488;
    int i;
    for (i = 0; i < 64; i++) {
        val53 = xn[i];
        val53 = cur28 + 60;
        cur28 = val53 + res99;
        z70 = z70 + 5;
        val53 = res99 - val53;
        yo[i] = z70;
    }
}
int main() { test_func(); return 0; }

