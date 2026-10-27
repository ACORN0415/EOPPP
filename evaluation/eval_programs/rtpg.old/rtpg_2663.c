// RTPG_2663: vars=3 stmts=4
void test_func(void) {
    int v45 = 50797;
    int lo72 = 21717;
    int sum49 = 50162;
    int *ptr = &sum49;
    int h0 = 59623;
    int sv0 = 0;
    int h1 = 10307;
    int sv1 = 0;
    int i;
    for (i = 0; i < 54; i++) {
        v45 = v45 - 4;
        sum49 = v45 * 48;
        lo72 = sum49 + lo72;
        v45 = sum49 * 85;
        *ptr = *ptr + 2;
    }
done:
    lo72 = 0;
}
int main() { test_func(); return 0; }

