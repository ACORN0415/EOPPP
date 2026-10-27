// RTPG_2692: vars=5 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int out78 = 36;
    int val33 = 61091;
    int tmp33 = -20;
    int z93 = 46;
    int x23 = 14;
    int i;
    for (i = 0; i < 16; i++) {
        val33 = xn[i];
        z93 = out78 + 64;
        out78 = val33 + x23;
        out78 = z93 - val33;
        tmp33 = tmp33 - 3;
        out78 = z93;
        z93 = x23 - val33;
        x23 = tmp33 - 83;
        tmp33 = z93 + tmp33;
        tmp33 = tmp33 + 5;
        tmp33 = val33 - val33;
        val33 = z93 - 35721;
        yo[i] = out78;
    }
}
int main() { test_func(); return 0; }

