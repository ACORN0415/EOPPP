// RTPG_6402: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int cnt86 = 61532;
    int acc74 = 8;
    int dat95 = 8;
    int res82 = 68;
    int prev74 = 38;
    int i;
    for (i = 0; i < 32; i++) {
        dat95 = xn[i];
        res82 = cnt86;
        prev74 = prev74 + 4;
        prev74 = prev74;
        res82 = res82 - 4;
        yo[i] = acc74;
    }
}
int main() { test_func(); return 0; }

