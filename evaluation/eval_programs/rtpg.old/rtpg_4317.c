// RTPG_4317: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int cnt20 = 12;
    int cur31 = 5;
    int prev89 = 48;
    int i;
    for (i = 0; i < 64; i++) {
        cur31 = xn[i];
        prev89 = prev89 - 6;
        prev89 = cnt20 + cur31;
        prev89 = prev89 - 3;
        yo[i] = cnt20;
    }
}
int main() { test_func(); return 0; }

