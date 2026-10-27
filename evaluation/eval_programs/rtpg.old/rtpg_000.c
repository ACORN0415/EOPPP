// RTPG_0: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int acc13 = 13;
    int cnt43 = 9;
    int v97 = 71;
    int val19 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        cnt43 = xn[i];
        v97 = cnt43 + val19;
        v97 = v97 - acc13;
        v97 = v97 + 31;
        if (val19 >= 19) {
        cnt43 = acc13;
        }
        yo[i] = cnt43;
    }
}
int main() { test_func(); return 0; }

