// RTPG_6558: vars=3 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int cnt54 = 26189;
    int res37 = 6;
    int res72 = 3;
    int i;
    for (i = 0; i < 16; i++) {
        res72 = xn[i];
        res72 = res72 + res37;
        cnt54 = cnt54;
        if (cnt54 > -47) {
        res37 = res72 + cnt54;
        }
        yo[i] = res72;
    }
}
int main() { test_func(); return 0; }

