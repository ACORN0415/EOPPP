// RTPG_1865: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int x43 = 7;
    int b65 = -6;
    int cnt15 = 6195;
    int i;
    for (i = 0; i < 16; i++) {
        b65 = xn[i];
        x43 = b65 + x43;
        b65 = x43 - x43;
        cnt15 = b65 - cnt15;
        b65 = cnt15;
        yo[i] = cnt15;
    }
}
int main() { test_func(); return 0; }

