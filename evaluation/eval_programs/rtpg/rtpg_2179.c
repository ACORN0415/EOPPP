// RTPG_2179: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int x35 = -32;
    int y94 = -41;
    int cnt5 = 37;
    int i;
    for (i = 0; i < 64; i++) {
        cnt5 = xn[i];
        cnt5 = y94 - cnt5;
        cnt5 = cnt5 - 3;
        cnt5 = cnt5 + y94;
        if (y94 > 48) {
        y94 = y94 + 4;
        }
        yo[i] = y94;
    }
}
int main() { test_func(); return 0; }

