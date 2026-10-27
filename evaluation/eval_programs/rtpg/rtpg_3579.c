// RTPG_3579: vars=3 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int dat92 = 30;
    int x48 = 6166;
    int lo88 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x48 = xn[i];
        lo88 = dat92 % x48;
        dat92 = x48 / lo88;
        dat92 = x48 / dat92;
        x48 = dat92 - x48;
        x48 = dat92 - 29108;
        x48 = x48 - 1;
        if (dat92 != 31) {
        lo88 = dat92 + x48;
        }
        yo[i] = x48;
    }
}
int main() { test_func(); return 0; }

