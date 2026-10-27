// RTPG_2983: vars=8 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int sum61 = 51;
    int v9 = 93;
    int acc99 = 5;
    int lo22 = 6;
    int c96 = 37;
    int tmp17 = 44565;
    int prev84 = 36;
    int cur64 = -16;
    int i;
    for (i = 0; i < 32; i++) {
        cur64 = xn[i];
        tmp17 = prev84 + sum61;
        acc99 = c96;
        lo22 = acc99 - lo22;
        prev84 = tmp17 + 63219;
        v9 = cur64 - 50050;
        cur64 = v9 + 6;
        tmp17 = lo22;
        prev84 = c96 - cur64;
        if (cur64 != 72) {
        acc99 = sum61;
        }
        yo[i] = tmp17;
    }
}
int main() { test_func(); return 0; }

