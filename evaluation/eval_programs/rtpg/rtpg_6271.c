// RTPG_6271: vars=7 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int val21 = 21128;
    int x61 = 3;
    int hi13 = 9;
    int z51 = 49;
    int v61 = 3;
    int c65 = 57818;
    int acc85 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        val21 = xn[i];
        x61 = val21 + v61;
        v61 = v61 + 1;
        c65 = hi13;
        v61 = z51 - acc85;
        val21 = v61 - -8;
        z51 = v61;
        v61 = hi13 - v61;
        yo[i] = val21;
    }
}
int main() { test_func(); return 0; }

