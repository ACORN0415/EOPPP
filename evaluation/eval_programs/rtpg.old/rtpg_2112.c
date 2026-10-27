// RTPG_2112: vars=3 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int cur46 = 56;
    int acc37 = 28;
    int lo29 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cur46 = xn[i];
        cur46 = lo29;
        lo29 = lo29 + 1;
        cur46 = lo29 + cur46;
        acc37 = cur46;
        acc37 = cur46 - 7;
        cur46 = lo29;
        cur46 = lo29;
        acc37 = lo29;
        cur46 = acc37;
        yo[i] = cur46;
    }
}
int main() { test_func(); return 0; }

