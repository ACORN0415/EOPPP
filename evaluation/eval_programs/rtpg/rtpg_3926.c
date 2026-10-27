// RTPG_3926: vars=4 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int acc72 = -25;
    int a48 = 12231;
    int out96 = 18871;
    int x4 = 3;
    int i;
    for (i = 0; i < 16; i++) {
        a48 = xn[i];
        acc72 = out96 + a48;
        a48 = acc72 - 24;
        out96 = a48 + 92;
        acc72 = x4 - acc72;
        a48 = x4 + acc72;
        x4 = x4 - 3;
        if (x4 <= 46) {
        acc72 = a48 - out96;
        }
        yo[i] = out96;
    }
}
int main() { test_func(); return 0; }

