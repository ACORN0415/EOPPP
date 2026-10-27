// RTPG_5727: vars=10 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int out62 = 44;
    int out35 = 26288;
    int val4 = 10;
    int val15 = 99;
    int val64 = 5;
    int y21 = 9;
    int lo61 = 9;
    int v86 = 16;
    int val39 = 47678;
    int x80 = 37;
    int i;
    for (i = 0; i < 64; i++) {
        val39 = xn[i];
        val64 = y21 + 2;
        out35 = out35 + 4;
        val15 = val64 + v86;
        val4 = v86 - 87;
        yo[i] = lo61;
    }
done:
    v86 = 0;
}
int main() { test_func(); return 0; }

