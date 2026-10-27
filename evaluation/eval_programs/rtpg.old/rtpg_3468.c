// RTPG_3468: vars=4 stmts=4
void test_func(void) {
    int a64 = 3;
    int cur13 = 32091;
    int prev11 = 0;
    int b29 = 36;
    int i;
    for (i = 0; i < 25; i++) {
        a64 = prev11;
        b29 = b29 - a64;
        a64 = prev11;
        cur13 = a64 + cur13;
    }
}
int main() { test_func(); return 0; }

