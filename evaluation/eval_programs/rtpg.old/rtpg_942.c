// RTPG_942: vars=10 stmts=7
void test_func(void) {
    int res79 = 50720;
    int out25 = 7;
    int out23 = 18;
    int tmp92 = 16;
    int hi27 = 4;
    int b86 = 35;
    int res28 = 1;
    int lo52 = 18092;
    int hi48 = 6470;
    int b32 = 8;
    int i;
    for (i = 0; i < 8; i++) {
        b32 = out25 + out23;
        tmp92 = out23 + tmp92;
        hi27 = hi27 + 4;
        lo52 = b86 - hi48;
        hi27 = out25 + tmp92;
        res79 = lo52;
        lo52 = lo52 - 4;
        if (lo52 >= 5) {
        out23 = out23 - 3;
        }
    }
}
int main() { test_func(); return 0; }

