// RTPG_1818: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int hi39 = 5;
    int lo80 = 8;
    int b38 = -48;
    int i;
    for (i = 0; i < 32; i++) {
        int j;
        for (j = 0; j < 20; j++) {
        b38 = b38 - 4;
        hi39 = lo80 - hi39;
        hi39 = lo80;
        }
    }
}
int main() { test_func(); return 0; }

