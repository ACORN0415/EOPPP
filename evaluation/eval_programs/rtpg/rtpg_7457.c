// RTPG_7457: vars=5 stmts=10
void test_func(void) {
    int hi97 = -2;
    int cnt82 = 0;
    int hi95 = 2;
    int hi36 = 95;
    int out61 = 11;
    int i;
    for (i = 0; i < 35; i++) {
        out61 = hi95;
        hi95 = out61 + hi95;
        hi97 = cnt82 - hi97;
        hi97 = hi95 + out61;
        hi97 = hi36;
        hi97 = cnt82 + 6258;
        hi95 = hi97 - 87;
        out61 = out61 + 2;
        hi97 = hi97 + hi97;
        hi36 = cnt82 + hi97;
    }
}
int main() { test_func(); return 0; }

