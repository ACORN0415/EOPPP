// RTPG_3157: vars=7 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    float prev68 = 99.79;
    int x26 = 67;
    int hi6 = 68;
    int tmp43 = 4479;
    int z44 = -30;
    int c75 = 85;
    int x74 = 53796;
    int i;
    for (i = 0; i < 32; i++) {
        x26 = xn[i];
        tmp43 = tmp43;
        hi6 = prev68 ^ x26;
        x74 = x74 - 3;
        z44 = z44 / tmp43;
        x26 = x26 - x74;
        c75 = hi6 - c75;
        c75 = x74;
        c75 = c75 + 5;
        if (z44 > 4) {
        z44 = c75 + z44;
        }
        yo[i] = hi6;
    }
}
int main() { test_func(); return 0; }

