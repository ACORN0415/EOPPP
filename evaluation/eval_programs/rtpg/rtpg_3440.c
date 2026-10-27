// RTPG_3440: vars=8 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int dat85 = 37112;
    int cnt9 = 4769;
    int acc14 = 0;
    int prev7 = -38;
    int v37 = 74;
    int x51 = 0;
    int cur97 = 11931;
    int z57 = 6844;
    int *ptr = &prev7;
    int i;
    for (i = 0; i < 16; i++) {
        cnt9 = xn[i];
        prev7 = prev7 + 5;
        acc14 = z57 + cnt9;
        cnt9 = dat85 - 3;
        *ptr = *ptr + 5;
        if (x51 != -24) {
        z57 = v37 + 8;
        }
        yo[i] = acc14;
    }
}
int main() { test_func(); return 0; }

