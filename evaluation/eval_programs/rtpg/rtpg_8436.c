// RTPG_8436: vars=4 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int x51 = 93;
    int v48 = 6;
    int a84 = 44;
    int hi2 = 53;
    int i;
    for (i = 0; i < 32; i++) {
        hi2 = xn[i];
        hi2 = a84 - hi2;
        x51 = a84;
        v48 = v48;
        x51 = a84 % x51;
        v48 = a84 - 68;
        v48 = hi2 / x51;
        yo[i] = v48;
    }
}
int main() { test_func(); return 0; }

