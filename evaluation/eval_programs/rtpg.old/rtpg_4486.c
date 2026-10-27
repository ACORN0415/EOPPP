// RTPG_4486: vars=7 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int acc96 = 56;
    int acc61 = -16;
    int v67 = 50530;
    int val28 = -41;
    int b80 = 3;
    int out63 = -45;
    int a1 = 33;
    int i;
    for (i = 0; i < 56; i++) {
        switch (val28) {
            case 0: b80 = 16; break;
            case 1: acc96 = 3; break;
            case 2: out63 = -10; break;
            case 3: b80 = 32; break;
            default: break;
        }
        val28 = val28 + 1;
    }
}
int main() { test_func(); return 0; }

