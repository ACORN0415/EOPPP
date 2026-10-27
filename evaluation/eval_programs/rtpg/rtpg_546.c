// RTPG_546: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int tmp1 = 9;
    int out94 = 47386;
    int res32 = 5;
    int z50 = -13;
    int acc73 = 69;
    int v95 = 10;
    int i;
    for (i = 0; i < 64; i++) {
        v95 = xn[i];
        tmp1 = tmp1 - z50;
        z50 = out94 - acc73;
        tmp1 = z50 + 48017;
        acc73 = tmp1 + acc73;
        out94 = acc73;
        if (tmp1 < -35) {
        out94 = res32 - 3;
        }
        yo[i] = v95;
    }
}
int main() { test_func(); return 0; }

