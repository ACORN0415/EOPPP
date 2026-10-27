// RTPG_4238: vars=4 stmts=2
void test_func(void) {
    int cur1 = -27;
    int cur16 = 3;
    int tmp10 = 34;
    int v89 = 16035;
    int i;
    for (i = 0; i < 21; i++) {
        v89 = v89 + 5;
        cur16 = cur16;
        if (v89 != 44) {
        v89 = cur16 + 46;
        }
    }
}
int main() { test_func(); return 0; }

