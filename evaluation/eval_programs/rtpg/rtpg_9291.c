// RTPG_9291: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int a80 = 7;
    int hi73 = 78;
    int y40 = 98;
    int sum67 = 40257;
    int h0 = 13977;
    int sv0 = 0;
    int h1 = 11094;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        a80 = xn[i];
        hi73 = sum67 + y40;
        y40 = y40 * -42;
        yo[i] = y40;
    }
}
int main() { test_func(); return 0; }

