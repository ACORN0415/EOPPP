// RTPG_8747: vars=7 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int sum61 = 25273;
    int hi7 = 13;
    int c60 = 1;
    int hi49 = 2;
    int v87 = 1;
    int hi73 = 57;
    int y36 = 5;
    int i;
    for (i = 0; i < 16; i++) {
        v87 = xn[i];
        sum61 = sum61 + 1;
        hi7 = v87 + sum61;
        sum61 = sum61 - 4;
        hi49 = y36 + c60;
        hi73 = hi73 - 1;
        yo[i] = hi49;
    }
}
int main() { test_func(); return 0; }

