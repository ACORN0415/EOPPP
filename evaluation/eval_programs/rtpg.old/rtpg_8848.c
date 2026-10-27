// RTPG_8848: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int cur21 = 8;
    double hi10 = 69.42;
    int c68 = 9;
    int i;
    for (i = 0; i < 91; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        cur21 = hi10 - c68;
        hi10 = cur21;
        cur21 = cur21 - c68;
        c68 = cur21;
        cur21 = c68 + 1;
        }
    }
done:
    cur21 = 0;
}
int main() { test_func(); return 0; }

