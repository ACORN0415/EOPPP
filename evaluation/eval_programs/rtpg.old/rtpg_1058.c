// RTPG_1058: vars=4 stmts=3
void test_func(void) {
    int sum6 = 20098;
    int prev21 = 33134;
    double hi7 = 24.45;
    int x30 = 45271;
    int i;
    for (i = 0; i < 7; i++) {
        prev21 = hi7;
        sum6 = x30;
        sum6 = hi7 + 7;
    }
}
int main() { test_func(); return 0; }

