// RTPG_5827: vars=10 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int v86 = 44;
    int val15 = 26288;
    int val4 = 10;
    int val64 = 99;
    int val39 = 5;
    int x80 = 9;
    int lo61 = 9;
    int y21 = 16;
    int out35 = 47678;
    int out62 = 37;
    int i;
    for (i = 0; i < 64; i++) {
        out35 = xn[i];
        val39 = x80 + 2;
        val15 = val15 + 4;
        val64 = val39 + y21;
        val4 = y21 - 87;
        yo[i] = lo61;
    }
}
int main() { test_func(); return 0; }

