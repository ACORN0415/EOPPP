// RTPG_1496: vars=3 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int hi85 = 29634;
    int a44 = -26;
    int hi14 = 31;
    int i;
    for (i = 0; i < 16; i++) {
        hi14 = xn[i];
        a44 = hi85 - 6;
        hi14 = hi14 - 2;
        a44 = a44 - hi14;
        hi14 = hi85 + 8;
        hi14 = a44 + hi85;
        hi14 = hi14 + 2;
        hi85 = hi85 - a44;
        hi14 = a44 - 5;
        a44 = hi14 + 47971;
        a44 = a44 - 1;
        hi14 = hi85 + hi14;
        if (a44 > -6) {
        hi14 = hi14 - a44;
        }
        yo[i] = hi14;
    }
}
int main() { test_func(); return 0; }

