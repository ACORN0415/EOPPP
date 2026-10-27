// RTPG_6117: vars=8 stmts=3
int xn[64];
int yo[64];
enum State { OFF, RED, SLOW };
void test_func(void) {
    int z33 = 70;
    int val44 = 6;
    int c67 = 96;
    int hi4 = 56;
    int val74 = 42;
    int sum30 = 21;
    double a55 = 44.64;
    int val80 = 2;
    enum State st = OFF;
    int i;
    for (i = 0; i < 64; i++) {
        a55 = xn[i];
        c67 = a55 + c67;
        z33 = val44 - c67;
        sum30 = c67 + z33;
        yo[i] = a55;
    }
}
int main() { test_func(); return 0; }

