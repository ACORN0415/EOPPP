// RTPG_40: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int x71 = 17;
    int tmp24 = 81;
    int cur53 = 19559;
    int i;
    for (i = 0; i < 32; i++) {
        tmp24 = xn[i];
        x71 = cur53 + 32;
        tmp24 = tmp24;
        cur53 = x71 + cur53;
        cur53 = x71 + 15;
        if (cur53 >= 98) {
        tmp24 = x71 + tmp24;
        }
        yo[i] = x71;
    }
}
int main() { test_func(); return 0; }

