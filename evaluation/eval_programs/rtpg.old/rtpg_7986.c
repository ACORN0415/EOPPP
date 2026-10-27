// RTPG_7986: vars=3 stmts=4
void test_func(void) {
    int tmp10 = 44;
    int c63 = -24;
    int out56 = 0;
    int i;
    for (i = 0; i < 70; i++) {
        tmp10 = tmp10 + c63;
        c63 = c63 - 3;
        tmp10 = out56;
        c63 = tmp10 % c63;
    }
}
int main() { test_func(); return 0; }

