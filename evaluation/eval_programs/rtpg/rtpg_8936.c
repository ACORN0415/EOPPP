// RTPG_8936: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int acc9 = -9;
    int sum33 = 6868;
    int v53 = -1;
    int out54 = 18;
    int tmp5 = 9;
    int a77 = 34006;
    int res19 = 70;
    int dat59 = 42614;
    int *ptr = &v53;
    int i;
    for (i = 0; i < 64; i++) {
        acc9 = xn[i];
        a77 = sum33 + out54;
        a77 = a77 - 4;
        tmp5 = tmp5 | sum33;
        out54 = dat59 - tmp5;
        tmp5 = a77 ^ sum33;
        *ptr = *ptr + 5;
        yo[i] = dat59;
    }
}
int main() { test_func(); return 0; }

