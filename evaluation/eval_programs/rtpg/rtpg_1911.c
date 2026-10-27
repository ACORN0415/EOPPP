// RTPG_1911: vars=5 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int c75 = 47;
    int dat48 = 51048;
    int prev83 = 80;
    int c91 = 22000;
    int hi4 = 4;
    int i;
    for (i = 0; i < 32; i++) {
        hi4 = xn[i];
        c75 = c75 + 5;
        c75 = prev83 - c91;
        prev83 = prev83 + 4;
        dat48 = dat48 - dat48;
        hi4 = c91 - prev83;
        c91 = c91 + prev83;
        yo[i] = dat48;
    }
}
int main() { test_func(); return 0; }

