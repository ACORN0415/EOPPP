// RTPG_8611: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int x83 = 37455;
    int out20 = 76;
    int acc63 = 6;
    int c82 = 2;
    int h0 = -39;
    int sv0 = 0;
    int h1 = 47;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        acc63 = xn[i];
        acc63 = x83 * 45371;
        x83 = acc63 | x83;
        x83 = x83 * 51451;
        yo[i] = x83;
    }
}
int main() { test_func(); return 0; }

