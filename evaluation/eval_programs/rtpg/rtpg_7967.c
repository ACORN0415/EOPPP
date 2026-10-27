// RTPG_7967: vars=3 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int v40 = -11;
    int x31 = 65358;
    int y96 = 33;
    int i;
    for (i = 0; i < 64; i++) {
        v40 = xn[i];
        y96 = y96 - 1;
        x31 = y96 + v40;
        y96 = y96;
        v40 = v40 - 5;
        x31 = v40 - x31;
        y96 = x31 - v40;
        if (v40 != 86) {
        x31 = v40 + x31;
        }
        yo[i] = y96;
    }
}
int main() { test_func(); return 0; }

