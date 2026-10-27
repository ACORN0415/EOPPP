// RTPG_784: vars=9 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int y57 = 82;
    int val40 = -18;
    int z36 = 6;
    int b37 = 17;
    int lo50 = 61;
    int out53 = 72;
    int a58 = 66;
    int sum99 = 100;
    int lo2 = 9;
    int *ptr = &b37;
    int i;
    for (i = 0; i < 64; i++) {
        z36 = xn[i];
        y57 = y57 - 1;
        out53 = val40 - b37;
        z36 = val40;
        val40 = out53 + lo2;
        lo2 = z36 + lo50;
        a58 = a58;
        *ptr = *ptr + 4;
        if (sum99 >= 90) {
        lo50 = b37 + val40;
        }
        yo[i] = z36;
    }
}
int main() { test_func(); return 0; }

