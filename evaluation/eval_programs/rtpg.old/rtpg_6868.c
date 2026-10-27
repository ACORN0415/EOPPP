// RTPG_6868: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int cur66 = 12907;
    int hi50 = 69;
    int cnt40 = 13;
    int i;
    for (i = 0; i < 32; i++) {
        hi50 = xn[i];
        hi50 = hi50 - 10;
        cnt40 = cnt40 + 1;
        if (cnt40 == 25) {
        hi50 = cnt40 - hi50;
        }
        yo[i] = hi50;
    }
}
int main() { test_func(); return 0; }

