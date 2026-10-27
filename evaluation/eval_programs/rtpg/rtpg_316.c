// RTPG_316: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int z57 = 24;
    int val95 = 63;
    int z24 = -46;
    int *ptr = &val95;
    int i;
    for (i = 0; i < 38; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        val95 = val95 - 5;
        z57 = z57 + 4;
        }
    }
}
int main() { test_func(); return 0; }

