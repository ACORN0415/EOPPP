// RTPG_3222: vars=5 stmts=4
enum State { ON, OFF, FAST };
void test_func(void) {
    int hi87 = 49;
    int hi44 = 31560;
    int z11 = 38087;
    int sum51 = 5;
    int tmp41 = 12;
    enum State st = ON;
    int i;
    for (i = 0; i < 27; i++) {
        sum51 = sum51 + 3;
        hi87 = sum51;
        sum51 = z11 + tmp41;
        hi44 = hi44 + 4;
    }
}
int main() { test_func(); return 0; }

