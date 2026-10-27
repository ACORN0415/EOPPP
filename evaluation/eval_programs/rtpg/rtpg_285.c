// RTPG_285: vars=6 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int a46 = 4;
    int a45 = -49;
    double val99 = 35.32;
    int v9 = -32;
    int hi69 = 20;
    int tmp72 = 19192;
    int i;
    for (i = 0; i < 32; i++) {
        tmp72 = xn[i];
        a46 = val99 + 9;
        a46 = val99 - hi69;
        hi69 = tmp72 - a46;
        yo[i] = a45;
    }
}
int main() { test_func(); return 0; }

