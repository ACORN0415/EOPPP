// RTPG_947: vars=6 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int val8 = 4933;
    int v23 = 69;
    int y65 = 62140;
    int z63 = 0;
    int y76 = 10681;
    int prev21 = 56;
    int i;
    for (i = 0; i < 64; i++) {
        y76 = xn[i];
        y65 = prev21 - 5;
        v23 = y76 - val8;
        yo[i] = prev21;
    }
}
int main() { test_func(); return 0; }

