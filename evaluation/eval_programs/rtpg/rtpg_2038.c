// RTPG_2038: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int z16 = 0;
    int cur99 = 6;
    int cnt78 = 82;
    double acc72 = 66.56;
    int cnt82 = 42947;
    int c76 = 2;
    int b54 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        cnt78 = xn[i];
        cnt82 = acc72 + cur99;
        cnt82 = c76 | cur99;
        c76 = b54;
        b54 = cur99 ^ c76;
        yo[i] = cur99;
    }
}
int main() { test_func(); return 0; }

