// RTPG_7864: vars=9 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int c72 = 0;
    int hi79 = 18;
    int hi91 = 65;
    int z31 = 39;
    int lo76 = 35;
    int prev72 = 78;
    int out81 = 70;
    int val54 = 7;
    int out35 = 18;
    int h0 = -13;
    int sv0 = 0;
    int h1 = -29;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        hi79 = xn[i];
        hi91 = hi91 * 42672;
        hi79 = hi79 - prev72;
        prev72 = out81 / hi79;
        if (hi91 > 58) {
        lo76 = z31;
        }
        yo[i] = c72;
    }
}
int main() { test_func(); return 0; }

