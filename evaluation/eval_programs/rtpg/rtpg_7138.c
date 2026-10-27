// RTPG_7138: vars=3 stmts=2
void test_func(void) {
    int a13 = 4;
    int lo46 = 48532;
    int b27 = 48;
    int i;
    for (i = 0; i < 95; i++) {
        a13 = a13 + 10;
        a13 = a13 - 3;
    }
}
int main() { test_func(); return 0; }

