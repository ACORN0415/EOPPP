// RTPG_8509: vars=7 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int prev61 = 40;
    int tmp76 = 31683;
    int sum59 = 4;
    int acc41 = 27452;
    int b54 = 26;
    int val36 = 24;
    int acc60 = 53452;
    int *ptr = &tmp76;
    int h0 = -46;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        prev61 = xn[i];
        b54 = val36 * 6;
        tmp76 = b54 * -6;
        acc60 = sum59 * 11;
        sum59 = b54 * 27;
        val36 = val36 - 5;
        *ptr = *ptr + 4;
        if (prev61 > 57) goto done;
        yo[i] = prev61;
    }
done:
    val36 = 0;
}
int main() { test_func(); return 0; }

