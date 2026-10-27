// RTPG_6647: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int z93 = -23;
    int v7 = -37;
    int c11 = 5;
    int i;
    for (i = 0; i < 32; i++) {
        z93 = xn[i];
        c11 = c11 - 5;
        c11 = c11 + 5;
        z93 = c11 ^ z93;
        z93 = c11;
        v7 = z93 + v7;
        yo[i] = c11;
    }
}
int main() { test_func(); return 0; }

