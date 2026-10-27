// RTPG_7858: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int b6 = 1;
    int x80 = 1;
    float val33 = 88.07;
    int acc14 = 1;
    int i;
    for (i = 0; i < 64; i++) {
        val33 = xn[i];
        val33 = acc14 - b6;
        val33 = val33 - x80;
        yo[i] = b6;
    }
}
int main() { test_func(); return 0; }

