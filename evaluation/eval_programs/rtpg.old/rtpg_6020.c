// RTPG_6020: vars=4 stmts=4
void test_func(void) {
    int val43 = 77;
    int hi80 = 16926;
    int y93 = 0;
    int tmp80 = 46856;
    int i;
    for (i = 0; i < 34; i++) {
        tmp80 = val43 + y93;
        y93 = tmp80;
        hi80 = hi80;
        y93 = hi80 + val43;
    }
}
int main() { test_func(); return 0; }

