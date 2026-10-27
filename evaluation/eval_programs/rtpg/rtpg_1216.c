// RTPG_1216: vars=6 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int a67 = 22;
    int c75 = 31;
    int sum23 = -19;
    int sum51 = -47;
    int lo91 = -19;
    int val90 = 84;
    int i;
    for (i = 0; i < 64; i++) {
        c75 = xn[i];
        a67 = a67 - 3;
        sum23 = sum51 + lo91;
        sum23 = lo91 - sum23;
        val90 = val90 / sum51;
        sum51 = sum51 + 0;
        sum51 = sum51 + 2;
        yo[i] = c75;
    }
}
int main() { test_func(); return 0; }

