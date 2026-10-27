// RTPG_1919: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int val14 = 18;
    int hi94 = 8;
    int prev17 = 9;
    int c46 = 18;
    int i;
    for (i = 0; i < 64; i++) {
        val14 = xn[i];
        hi94 = c46;
        prev17 = prev17 - c46;
        c46 = prev17 + 91;
        hi94 = hi94 - 4;
        prev17 = prev17 - 2;
        yo[i] = hi94;
    }
}
int main() { test_func(); return 0; }

