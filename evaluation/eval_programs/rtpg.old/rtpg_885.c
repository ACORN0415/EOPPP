// RTPG_885: vars=7 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int c92 = 59683;
    int val22 = 9;
    int cnt8 = 33274;
    int a16 = -19;
    int c13 = 90;
    int out63 = 61208;
    int c21 = 36;
    int i;
    for (i = 0; i < 16; i++) {
        c13 = xn[i];
        c21 = c13 - 0;
        c21 = c21 + c13;
        c13 = c21 + 19304;
        cnt8 = a16 + c21;
        a16 = a16 - 3;
        c21 = c21 - 2;
        yo[i] = c21;
    }
}
int main() { test_func(); return 0; }

