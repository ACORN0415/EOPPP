// RTPG_3832: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int prev28 = 3;
    int res17 = 20202;
    int hi65 = 6;
    int c35 = 24;
    int i;
    for (i = 0; i < 16; i++) {
        c35 = xn[i];
        res17 = res17 - hi65;
        c35 = prev28;
        yo[i] = hi65;
    }
}
int main() { test_func(); return 0; }

