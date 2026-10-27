// RTPG_5028: vars=7 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int z20 = 76;
    int val40 = 45713;
    int cnt89 = 27;
    int tmp61 = 47972;
    int cur49 = 67;
    int lo52 = 38667;
    int z79 = 7;
    int i;
    for (i = 0; i < 64; i++) {
        z20 = xn[i];
        z79 = z20 & z79;
        z20 = lo52 | cnt89;
        yo[i] = z20;
    }
}
int main() { test_func(); return 0; }

