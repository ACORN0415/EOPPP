// RTPG_8089: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int hi48 = 1;
    int c3 = 20;
    int prev82 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        prev82 = xn[i];
        hi48 = hi48 + 4;
        c3 = c3 + 5;
        c3 = prev82 - hi48;
        yo[i] = hi48;
    }
}
int main() { test_func(); return 0; }

