// RTPG_8512: vars=6 stmts=8
void test_func(void) {
    int v39 = -25;
    int v77 = 44;
    int c59 = 4;
    int prev61 = 20171;
    int prev81 = 11;
    int cnt76 = 1;
    int i;
    for (i = 0; i < 25; i++) {
        prev61 = prev61 + 4;
        c59 = cnt76 - 4;
        cnt76 = v77 + prev81;
        prev61 = prev61 - c59;
        prev61 = v39 - v77;
        c59 = prev81 + prev61;
        c59 = prev61 + cnt76;
        v39 = c59;
    }
}
int main() { test_func(); return 0; }

