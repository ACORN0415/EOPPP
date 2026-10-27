// RTPG_681: vars=4 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int val98 = 35943;
    int b66 = 93;
    int c33 = 2;
    int val8 = 1868;
    int i;
    for (i = 0; i < 32; i++) {
        c33 = xn[i];
        c33 = c33 - 63334;
        c33 = b66 - val98;
        val98 = val98 + 2;
        yo[i] = b66;
    }
}
int main() { test_func(); return 0; }

