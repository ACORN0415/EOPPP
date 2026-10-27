// RTPG_4374: vars=3 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int tmp86 = 50;
    int hi10 = 70;
    double sum11 = 88.39;
    int i;
    for (i = 0; i < 16; i++) {
        hi10 = xn[i];
        hi10 = sum11 - 10;
        tmp86 = tmp86 + 1;
        if (hi10 > 15) goto done;
        if (hi10 != 25) {
        tmp86 = tmp86 + 4;
        }
        yo[i] = hi10;
    }
done:
    tmp86 = 0;
}
int main() { test_func(); return 0; }

