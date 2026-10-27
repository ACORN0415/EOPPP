// RTPG_0: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int cnt43 = 13;
    int val19 = 9;
    int acc13 = 71;
    int v97 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        val19 = xn[i];
        acc13 = val19 + v97;
        acc13 = acc13 - cnt43;
        acc13 = acc13 + 31;
        if (v97 >= 19) {
        val19 = cnt43;
        }
        yo[i] = val19;
    }
}
int main() { test_func(); return 0; }

