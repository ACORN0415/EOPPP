// RTPG_5567: vars=9 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int prev56 = -50;
    int hi91 = 1;
    int lo44 = 17;
    int val98 = 4;
    int val33 = 53;
    int a57 = 42;
    int lo84 = -19;
    int out46 = 8757;
    int z22 = 7;
    int h0 = 9049;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        lo44 = xn[i];
        val33 = a57 - 63393;
        lo44 = lo44 + 3;
        out46 = z22 + lo84;
        lo84 = val98 - lo44;
        lo44 = lo44 % val98;
        z22 = out46 - lo44;
        prev56 = lo44 + 4;
        hi91 = lo84 % z22;
        yo[i] = hi91;
    }
}
int main() { test_func(); return 0; }

