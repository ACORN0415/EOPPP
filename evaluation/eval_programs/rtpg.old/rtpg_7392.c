// RTPG_7392: vars=5 stmts=10
void test_func(void) {
    int hi95 = -2;
    int hi36 = 0;
    int hi97 = 2;
    int cnt82 = 95;
    int out61 = 11;
    int i;
    for (i = 0; i < 35; i++) {
        out61 = hi97;
        hi97 = out61 + hi97;
        hi95 = hi36 - hi95;
        hi95 = hi97 + out61;
        hi95 = cnt82;
        hi95 = hi36 + 6258;
        hi97 = hi95 - 87;
        out61 = out61 + 2;
        hi95 = hi95 + hi95;
        cnt82 = hi36 + hi95;
    }
}
int main() { test_func(); return 0; }

