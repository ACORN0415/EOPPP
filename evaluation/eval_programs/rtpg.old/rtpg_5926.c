// RTPG_5926: vars=3 stmts=7
int xn[64];
int yo[64];
enum State { RED, SLOW, FAST };
void test_func(void) {
    int val31 = 9;
    int z86 = 44172;
    int z13 = 49;
    enum State st = RED;
    int i;
    for (i = 0; i < 64; i++) {
        val31 = xn[i];
        z86 = val31 - 86;
        z86 = val31;
        val31 = z86 - z13;
        val31 = z13;
        z86 = z86 + 2;
        z13 = val31;
        z13 = z13 + 4;
        yo[i] = val31;
    }
}
int main() { test_func(); return 0; }

