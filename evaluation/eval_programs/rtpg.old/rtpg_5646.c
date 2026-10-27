// RTPG_5646: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int val8 = 10;
    int prev65 = 22;
    int hi51 = 2120;
    int z20 = 3951;
    int lo8 = 15;
    int z15 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        val8 = xn[i];
        val8 = z15 & z20;
        prev65 = val8 ^ prev65;
        lo8 = prev65 / z20;
        lo8 = prev65 + hi51;
        z15 = val8 - hi51;
        yo[i] = z20;
    }
}
int main() { test_func(); return 0; }

