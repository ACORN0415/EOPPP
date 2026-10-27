// RTPG_8224: vars=7 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int hi34 = 1;
    int out27 = -31;
    int acc98 = 60364;
    int cur78 = 77;
    int dat35 = 98;
    int tmp93 = -32;
    int res48 = 22;
    int h0 = -39;
    int sv0 = 0;
    int h1 = 88;
    int sv1 = 0;
    int h2 = 57635;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat35 = xn[i];
        tmp93 = res48 - acc98;
        tmp93 = tmp93 % hi34;
        acc98 = out27 ^ acc98;
        acc98 = cur78 | dat35;
        yo[i] = res48;
    }
}
int main() { test_func(); return 0; }

