// RTPG_9229: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int prev15 = 33517;
    int acc90 = 2;
    int cur90 = 8;
    int i;
    for (i = 0; i < 32; i++) {
        prev15 = xn[i];
        cur90 = cur90 + 4;
        cur90 = acc90 + cur90;
        if (acc90 > 85) {
        cur90 = prev15 + cur90;
        }
        yo[i] = acc90;
    }
}
int main() { test_func(); return 0; }

