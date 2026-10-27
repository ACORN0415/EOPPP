// RTPG_4915: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int res61 = 36431;
    int b84 = 20;
    int res20 = 30;
    int i;
    for (i = 0; i < 32; i++) {
        res61 = xn[i];
        res20 = res20 + 1;
        b84 = b84 + 1;
        yo[i] = res20;
    }
}
int main() { test_func(); return 0; }

