// RTPG_3548: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int z15 = 64;
    int out27 = 48;
    int prev6 = -11;
    int i;
    for (i = 0; i < 64; i++) {
        z15 = xn[i];
        z15 = prev6 - z15;
        out27 = z15 - z15;
        yo[i] = z15;
    }
}
int main() { test_func(); return 0; }

