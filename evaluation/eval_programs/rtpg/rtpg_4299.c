// RTPG_4299: vars=5 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int out65 = 10;
    int y29 = 8;
    int b68 = -33;
    int prev16 = 88;
    float dat98 = 62.37;
    int i;
    for (i = 0; i < 16; i++) {
        b68 = xn[i];
        y29 = prev16 + out65;
        dat98 = dat98 + 5;
        b68 = b68 - out65;
        prev16 = b68 + b68;
        b68 = dat98 + -46;
        dat98 = out65;
        y29 = prev16 - 92;
        if (prev16 != -45) {
        prev16 = prev16 - out65;
        }
        yo[i] = out65;
    }
}
int main() { test_func(); return 0; }

