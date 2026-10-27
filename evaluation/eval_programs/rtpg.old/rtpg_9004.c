// RTPG_9004: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int cnt12 = 42;
    int c14 = 12;
    int lo57 = 9;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 54;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        c14 = xn[i];
        c14 = c14 - 61603;
        c14 = c14 - c14;
        c14 = c14 - 42963;
        lo57 = c14 ^ lo57;
        if (c14 != 7) {
        lo57 = c14;
        }
        yo[i] = cnt12;
    }
done:
    c14 = 0;
}
int main() { test_func(); return 0; }

