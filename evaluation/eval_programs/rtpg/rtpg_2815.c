// RTPG_2815: vars=9 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int dat46 = 17440;
    int dat74 = 90;
    int dat10 = 80;
    int z48 = -34;
    int x70 = 34;
    int prev90 = 39;
    int y67 = 20170;
    int v95 = 52063;
    int y89 = 8;
    int i;
    for (i = 0; i < 16; i++) {
        x70 = xn[i];
        prev90 = prev90 - 4;
        dat46 = dat46 + 2;
        z48 = dat46 + v95;
        dat74 = v95 + dat46;
        dat74 = y89;
        yo[i] = dat46;
    }
}
int main() { test_func(); return 0; }

