// RTPG_1783: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int res5 = 3;
    int tmp26 = 0;
    int x49 = 9;
    int res48 = 28;
    int i;
    for (i = 0; i < 64; i++) {
        res5 = xn[i];
        tmp26 = res48 + res48;
        res5 = res5;
        res48 = res5 | tmp26;
        yo[i] = res5;
    }
}
int main() { test_func(); return 0; }

