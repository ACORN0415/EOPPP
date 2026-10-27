// RTPG_2711: vars=9 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int x22 = 68;
    int y56 = 4;
    int sum61 = 4;
    int res61 = 1;
    int z76 = 1;
    int lo21 = 0;
    int v92 = 94;
    int acc84 = 69;
    int dat49 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        acc84 = xn[i];
        y56 = dat49 - y56;
        lo21 = lo21 + 3;
        y56 = y56 + 1;
        y56 = lo21 + sum61;
        sum61 = lo21;
        if (x22 <= 99) {
        acc84 = acc84 - 3;
        }
        yo[i] = y56;
    }
}
int main() { test_func(); return 0; }

