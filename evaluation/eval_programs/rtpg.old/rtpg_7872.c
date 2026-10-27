// RTPG_7872: vars=3 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int y96 = -11;
    int v40 = 65358;
    int x31 = 33;
    int i;
    for (i = 0; i < 64; i++) {
        y96 = xn[i];
        x31 = x31 - 1;
        v40 = x31 + y96;
        x31 = x31;
        y96 = y96 - 5;
        v40 = y96 - v40;
        x31 = v40 - y96;
        if (y96 != 86) {
        v40 = y96 + v40;
        }
        yo[i] = x31;
    }
}
int main() { test_func(); return 0; }

