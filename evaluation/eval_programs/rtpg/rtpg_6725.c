// RTPG_6725: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int sum26 = -37;
    int out24 = 39;
    int tmp75 = -15;
    int cur65 = 30682;
    int prev16 = 12;
    int i;
    for (i = 0; i < 32; i++) {
        out24 = xn[i];
        prev16 = prev16 + 1;
        cur65 = out24 + prev16;
        prev16 = tmp75 + sum26;
        cur65 = out24;
        yo[i] = sum26;
    }
}
int main() { test_func(); return 0; }

