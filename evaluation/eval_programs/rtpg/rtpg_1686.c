// RTPG_1686: vars=8 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int b59 = 11996;
    int res17 = 32238;
    int a63 = 23;
    int prev24 = 1;
    int out95 = 33760;
    int tmp58 = 7;
    int prev79 = 3;
    int acc94 = 45313;
    int i;
    for (i = 0; i < 32; i++) {
        prev79 = xn[i];
        acc94 = out95;
        a63 = a63 + 2;
        b59 = b59;
        res17 = res17 - 3;
        yo[i] = res17;
    }
}
int main() { test_func(); return 0; }

