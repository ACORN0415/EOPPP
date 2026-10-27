// RTPG_3616: vars=4 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int dat37 = -15;
    int z85 = 52436;
    int sum61 = 10;
    int cnt10 = 49196;
    int i;
    for (i = 0; i < 16; i++) {
        cnt10 = xn[i];
        dat37 = sum61 + cnt10;
        sum61 = z85;
        cnt10 = cnt10 - sum61;
        cnt10 = z85;
        sum61 = cnt10;
        z85 = z85 - 2;
        dat37 = dat37 + 2;
        if (cnt10 > 44) {
        cnt10 = sum61;
        }
        yo[i] = cnt10;
    }
}
int main() { test_func(); return 0; }

