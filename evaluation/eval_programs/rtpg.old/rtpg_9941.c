// RTPG_9941: vars=8 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int prev88 = 53;
    int val92 = 3;
    int x9 = 10;
    int x77 = 55;
    int sum22 = 53200;
    int hi4 = 49407;
    int val14 = 6;
    int b89 = 42;
    int h0 = 80;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int h2 = 10;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        val14 = xn[i];
        hi4 = prev88 + sum22;
        prev88 = x77 - val92;
        val14 = prev88;
        x77 = b89;
        val14 = val14 + 4;
        if (x9 >= -6) {
        x77 = x9;
        }
        yo[i] = sum22;
    }
}
int main() { test_func(); return 0; }

