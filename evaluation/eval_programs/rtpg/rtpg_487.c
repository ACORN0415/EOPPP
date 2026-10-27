// RTPG_487: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int val99 = 6;
    int val34 = 33;
    int z77 = 58;
    int out2 = -37;
    int i;
    for (i = 0; i < 64; i++) {
        val99 = xn[i];
        z77 = z77 - 1;
        val34 = val34 + out2;
        yo[i] = val99;
    }
}
int main() { test_func(); return 0; }

