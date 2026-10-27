// RTPG_4310: vars=3 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int v92 = 3;
    int lo41 = 38;
    int lo15 = -10;
    int i;
    for (i = 0; i < 49; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        lo41 = lo15 + 32880;
        lo41 = lo41 + lo15;
        v92 = lo41;
        lo41 = v92 + 3;
        lo41 = v92 + lo41;
        lo15 = lo15 - 2;
        lo15 = lo15;
        v92 = v92 + lo15;
        }
    }
}
int main() { test_func(); return 0; }

