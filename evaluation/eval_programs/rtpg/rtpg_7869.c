// RTPG_7869: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int y99 = 18;
    int a31 = 50023;
    int b12 = 4;
    int cnt94 = 85;
    int c76 = 10;
    int *ptr = &y99;
    int h0 = -49;
    int sv0 = 0;
    int h1 = -50;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        c76 = xn[i];
        a31 = a31 - 4;
        cnt94 = b12 + 49;
        cnt94 = a31;
        c76 = cnt94 + b12;
        y99 = a31;
        *ptr = *ptr + 4;
        if (a31 > 1) goto done;
        yo[i] = b12;
    }
done:
    cnt94 = 0;
}
int main() { test_func(); return 0; }

