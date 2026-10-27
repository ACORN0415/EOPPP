// RTPG_6856: vars=8 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int dat0 = 25226;
    int out77 = 55611;
    int b29 = 5;
    int res64 = -21;
    int z14 = 5;
    int prev13 = 47602;
    int v75 = 3;
    int z9 = -2;
    int i;
    for (i = 0; i < 64; i++) {
        z9 = xn[i];
        out77 = prev13 + z14;
        prev13 = res64 - out77;
        z14 = z14 - dat0;
        yo[i] = res64;
    }
}
int main() { test_func(); return 0; }

