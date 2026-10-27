// RTPG_3114: vars=8 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int acc15 = -48;
    int x91 = 30;
    int b72 = 57112;
    int b63 = 3;
    int res95 = 60611;
    int y24 = 17;
    int hi81 = 15150;
    int b43 = -1;
    int i;
    for (i = 0; i < 16; i++) {
        y24 = xn[i];
        b63 = res95 + y24;
        acc15 = b43 + b63;
        b63 = x91;
        x91 = b43 + 39111;
        y24 = res95;
        y24 = b63 - hi81;
        if (acc15 != 66) {
        b63 = b63 + 2;
        }
        yo[i] = y24;
    }
}
int main() { test_func(); return 0; }

