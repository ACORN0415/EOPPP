// RTPG_4201: vars=9 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int c78 = 16;
    int out60 = 40;
    int val86 = 7;
    int cur49 = 2;
    int lo86 = 2351;
    int out44 = 5;
    float dat7 = 24.92;
    int acc45 = 4;
    int x55 = 91;
    int *ptr = &out44;
    int i;
    for (i = 0; i < 32; i++) {
        out44 = xn[i];
        val86 = acc45;
        c78 = cur49 + 10;
        *ptr = *ptr + 1;
        yo[i] = acc45;
    }
}
int main() { test_func(); return 0; }

