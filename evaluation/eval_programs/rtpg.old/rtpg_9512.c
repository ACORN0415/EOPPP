// RTPG_9512: vars=3 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int lo52 = 7;
    int cur46 = -24;
    int lo86 = 1961;
    int i;
    for (i = 0; i < 64; i++) {
        lo52 = xn[i];
        lo52 = lo52 + 4801;
        cur46 = lo52 - 1;
        lo86 = cur46 + 93;
        cur46 = cur46 + 4;
        lo52 = cur46 - lo86;
        lo86 = cur46 + 66;
        yo[i] = cur46;
    }
}
int main() { test_func(); return 0; }

