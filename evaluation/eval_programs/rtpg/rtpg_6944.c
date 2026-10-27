// RTPG_6944: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int hi50 = 12907;
    int cnt40 = 69;
    int cur66 = 13;
    int i;
    for (i = 0; i < 32; i++) {
        cnt40 = xn[i];
        cnt40 = cnt40 - 10;
        cur66 = cur66 + 1;
        if (cur66 == 25) {
        cnt40 = cur66 - cnt40;
        }
        yo[i] = cnt40;
    }
}
int main() { test_func(); return 0; }

