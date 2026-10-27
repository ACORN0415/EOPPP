// RTPG_7402: vars=8 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int v94 = -28;
    int prev89 = -32;
    int hi4 = -40;
    int lo25 = 8;
    int c89 = 13;
    int b29 = 52880;
    int cnt84 = 92;
    int acc58 = 26;
    int i;
    for (i = 0; i < 16; i++) {
        hi4 = xn[i];
        b29 = b29 + 5;
        acc58 = prev89 - cnt84;
        hi4 = c89 - v94;
        cnt84 = lo25 - prev89;
        v94 = v94 + 4;
        hi4 = v94 + v94;
        yo[i] = prev89;
    }
}
int main() { test_func(); return 0; }

