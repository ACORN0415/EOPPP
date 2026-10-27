// RTPG_4780: vars=4 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int a59 = 57;
    int hi40 = 36576;
    int tmp41 = 14;
    int acc86 = 48;
    int i;
    for (i = 0; i < 16; i++) {
        a59 = xn[i];
        tmp41 = tmp41 - 2;
        a59 = tmp41 - a59;
        hi40 = acc86 + a59;
        hi40 = acc86;
        acc86 = tmp41 + acc86;
        tmp41 = tmp41 + 3;
        tmp41 = hi40 - tmp41;
        tmp41 = tmp41;
        yo[i] = acc86;
    }
}
int main() { test_func(); return 0; }

