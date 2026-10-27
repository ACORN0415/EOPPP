// RTPG_5244: vars=3 stmts=4
void test_func(void) {
    int v22 = 29549;
    int v64 = 10;
    int hi30 = -16;
    int i;
    for (i = 0; i < 11; i++) {
        v64 = hi30 + hi30;
        v64 = v64 - v22;
        hi30 = v22 - 8;
        v64 = hi30;
    }
}
int main() { test_func(); return 0; }

