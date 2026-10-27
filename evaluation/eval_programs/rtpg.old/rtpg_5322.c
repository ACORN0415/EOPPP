// RTPG_5322: vars=6 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int v26 = 64;
    int a16 = 19891;
    int out84 = 68;
    int z51 = 11;
    int prev54 = -37;
    int acc83 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        acc83 = xn[i];
        v26 = v26 - out84;
        v26 = out84;
        out84 = prev54;
        acc83 = out84 + acc83;
        out84 = out84 - out84;
        prev54 = out84;
        out84 = a16 - z51;
        if (acc83 > 96) {
        acc83 = a16 - out84;
        }
        yo[i] = prev54;
    }
}
int main() { test_func(); return 0; }

