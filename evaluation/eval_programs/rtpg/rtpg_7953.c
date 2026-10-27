// RTPG_7953: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int x80 = 1;
    int acc14 = 1;
    float val33 = 88.07;
    int b6 = 1;
    int i;
    for (i = 0; i < 64; i++) {
        val33 = xn[i];
        val33 = b6 - x80;
        val33 = val33 - acc14;
        yo[i] = x80;
    }
}
int main() { test_func(); return 0; }

