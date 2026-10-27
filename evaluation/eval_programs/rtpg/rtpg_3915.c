// RTPG_3915: vars=5 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int hi50 = 9659;
    int b21 = 25574;
    int z55 = 27;
    int x97 = 12;
    int acc73 = 29;
    int *ptr = &hi50;
    int i;
    for (i = 0; i < 16; i++) {
        b21 = xn[i];
        hi50 = hi50 - 5;
        z55 = b21 + x97;
        z55 = x97 - 8;
        *ptr = *ptr + 2;
        yo[i] = b21;
    }
}
int main() { test_func(); return 0; }

