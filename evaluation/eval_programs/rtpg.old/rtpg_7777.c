// RTPG_7777: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int cnt94 = 18;
    int y99 = 50023;
    int c76 = 4;
    int a31 = 85;
    int b12 = 10;
    int *ptr = &cnt94;
    int h0 = -49;
    int sv0 = 0;
    int h1 = -50;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b12 = xn[i];
        y99 = y99 - 4;
        a31 = c76 + 49;
        a31 = y99;
        b12 = a31 + c76;
        cnt94 = y99;
        *ptr = *ptr + 4;
        if (y99 > 1) goto done;
        yo[i] = c76;
    }
done:
    a31 = 0;
}
int main() { test_func(); return 0; }

