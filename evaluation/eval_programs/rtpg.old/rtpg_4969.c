// RTPG_4969: vars=9 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int val69 = 56117;
    int v23 = 28;
    int tmp6 = 7;
    int acc24 = -23;
    int prev78 = -37;
    int a79 = 77;
    int lo52 = 16;
    int acc83 = 13921;
    int tmp56 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        prev78 = xn[i];
        v23 = a79;
        tmp56 = a79 - 1;
        val69 = val69 - 1;
        tmp56 = tmp56;
        yo[i] = val69;
    }
}
int main() { test_func(); return 0; }

