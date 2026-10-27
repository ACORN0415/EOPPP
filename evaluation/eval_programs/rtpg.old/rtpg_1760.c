// RTPG_1760: vars=8 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int val61 = 6;
    int b70 = 2310;
    int x38 = -22;
    int a2 = 9;
    int val74 = 40;
    int b91 = -28;
    int z78 = 5;
    int val83 = 2;
    int i;
    for (i = 0; i < 64; i++) {
        val83 = xn[i];
        x38 = x38 - 3;
        b91 = b91 - a2;
        b70 = x38 - 7;
        if (val61 != 8) {
        a2 = x38 - val61;
        }
        yo[i] = x38;
    }
}
int main() { test_func(); return 0; }

