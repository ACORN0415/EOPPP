// RTPG_4752: vars=3 stmts=8
void test_func(void) {
    int lo66 = 6;
    int prev33 = 9;
    int out83 = 16;
    int i;
    for (i = 0; i < 49; i++) {
        lo66 = lo66 + -30;
        prev33 = prev33 - out83;
        lo66 = lo66;
        prev33 = lo66 - lo66;
        prev33 = out83 + lo66;
        lo66 = prev33 + out83;
        prev33 = out83 + 57;
        out83 = out83 - 20;
        if (prev33 >= -1) {
        out83 = lo66;
        }
    }
}
int main() { test_func(); return 0; }

