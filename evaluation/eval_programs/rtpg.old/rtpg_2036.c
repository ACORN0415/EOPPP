// RTPG_2036: vars=3 stmts=4
void test_func(void) {
    int acc32 = -14;
    int acc62 = 43424;
    int tmp3 = 1034;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 48363;
    int sv1 = 0;
    int i;
    for (i = 0; i < 47; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        tmp3 = acc32 + 7;
        acc62 = acc32 + tmp3;
        tmp3 = acc32 + tmp3;
        acc32 = acc62 - acc32;
        }
    }
}
int main() { test_func(); return 0; }

