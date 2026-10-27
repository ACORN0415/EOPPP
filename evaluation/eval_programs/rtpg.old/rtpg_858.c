// RTPG_858: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int res14 = 58789;
    int c43 = 14117;
    int z82 = 2;
    int lo11 = 15;
    int i;
    for (i = 0; i < 16; i++) {
        res14 = xn[i];
        lo11 = lo11 - res14;
        res14 = c43 + res14;
        res14 = c43 + z82;
        yo[i] = z82;
    }
}
int main() { test_func(); return 0; }

