// RTPG_5702: vars=6 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int lo41 = 91;
    int v67 = 9;
    int cur95 = 21;
    int b72 = 82;
    int acc15 = 6;
    int acc81 = 35157;
    int i;
    for (i = 0; i < 32; i++) {
        acc81 = xn[i];
        b72 = acc81 + 7;
        b72 = v67 - acc15;
        if (lo41 > 9) {
        lo41 = acc15;
        }
        yo[i] = b72;
    }
}
int main() { test_func(); return 0; }

