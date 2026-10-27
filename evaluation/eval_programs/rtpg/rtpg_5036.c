// RTPG_5036: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int a11 = 8;
    int hi18 = 82;
    int cur80 = 1;
    int val28 = 4;
    int i;
    for (i = 0; i < 16; i++) {
        hi18 = xn[i];
        val28 = val28 - -13;
        val28 = val28 + 1;
        yo[i] = hi18;
    }
}
int main() { test_func(); return 0; }

