// RTPG_2406: vars=5 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int b69 = 4;
    int dat67 = 9;
    int res26 = 81;
    int v50 = 45;
    int sum19 = 63008;
    int i;
    for (i = 0; i < 64; i++) {
        dat67 = xn[i];
        sum19 = sum19;
        dat67 = v50;
        sum19 = v50;
        v50 = v50 + b69;
        sum19 = b69 + res26;
        b69 = b69 - 2;
        yo[i] = res26;
    }
}
int main() { test_func(); return 0; }

