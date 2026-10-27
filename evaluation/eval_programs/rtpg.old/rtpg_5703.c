// RTPG_5703: vars=7 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int hi65 = -10;
    int z61 = 35247;
    int tmp43 = 2;
    int dat22 = 10;
    int val82 = 9;
    int prev81 = 7;
    int dat66 = 99;
    int i;
    for (i = 0; i < 32; i++) {
        dat66 = xn[i];
        z61 = z61;
        tmp43 = dat66 - z61;
        prev81 = dat66;
        hi65 = hi65 + 4;
        hi65 = dat22 + dat66;
        dat22 = dat22 + 3;
        val82 = tmp43;
        prev81 = prev81 + 5;
        hi65 = hi65 - 1;
        val82 = prev81 - dat22;
        z61 = val82 + dat66;
        tmp43 = tmp43 + 5;
        yo[i] = dat66;
    }
}
int main() { test_func(); return 0; }

