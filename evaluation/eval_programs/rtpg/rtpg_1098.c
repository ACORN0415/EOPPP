// RTPG_1098: vars=10 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int lo96 = -13;
    int cur38 = 44840;
    int acc2 = 54;
    int cnt35 = 34;
    int acc39 = 79;
    int cur65 = 2;
    int z10 = 7;
    int val31 = 18629;
    int b59 = 45;
    int a25 = 2;
    int i;
    for (i = 0; i < 16; i++) {
        acc2 = xn[i];
        z10 = acc39 + cur65;
        acc39 = z10 / cur38;
        cur38 = cur65 + 8;
        acc39 = b59 & cnt35;
        cur65 = cur65 - 2;
        acc2 = lo96 / acc39;
        cur65 = acc2 + b59;
        z10 = z10 - 3;
        if (val31 < 30) {
        b59 = cnt35 - b59;
        }
        yo[i] = val31;
    }
}
int main() { test_func(); return 0; }

