// RTPG_3560: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int out27 = 64;
    int prev6 = 48;
    int z15 = -11;
    int i;
    for (i = 0; i < 64; i++) {
        out27 = xn[i];
        out27 = z15 - out27;
        prev6 = out27 - out27;
        yo[i] = out27;
    }
}
int main() { test_func(); return 0; }

