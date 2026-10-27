// RTPG_2690: vars=6 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int val88 = 9;
    int z40 = 10;
    int cur61 = 66;
    int x93 = -30;
    int a38 = 19987;
    int res57 = 14;
    int i;
    for (i = 0; i < 64; i++) {
        z40 = xn[i];
        val88 = res57 - val88;
        x93 = res57 + cur61;
        if (a38 >= 1) {
        z40 = z40 + 4;
        }
        yo[i] = z40;
    }
}
int main() { test_func(); return 0; }

