// RTPG_2696: vars=5 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int val77 = 36;
    int res29 = 6655;
    int z19 = -47;
    int val64 = 10;
    int a33 = -20;
    int i;
    for (i = 0; i < 32; i++) {
        z19 = xn[i];
        val77 = a33;
        a33 = z19;
        a33 = val77 - 50;
        val77 = z19 + val64;
        z19 = z19 - 78;
        z19 = val64;
        z19 = z19 - 1;
        z19 = a33;
        yo[i] = z19;
    }
}
int main() { test_func(); return 0; }

