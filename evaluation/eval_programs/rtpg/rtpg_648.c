// RTPG_648: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int x14 = 2;
    int val85 = 1;
    int cnt37 = 9;
    int *ptr = &x14;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 48825;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        val85 = xn[i];
        val85 = val85 + 5;
        cnt37 = val85 * 30588;
        x14 = x14;
        val85 = x14 - 0;
        val85 = val85 - 5;
        x14 = x14 * 41;
        val85 = cnt37 * 5;
        *ptr = *ptr + 4;
        yo[i] = x14;
    }
}
int main() { test_func(); return 0; }

