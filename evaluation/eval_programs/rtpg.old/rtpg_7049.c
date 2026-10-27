// RTPG_7049: vars=3 stmts=3
void test_func(void) {
    int sum97 = 1105;
    int a45 = 40642;
    int a24 = 7;
    int i;
    for (i = 0; i < 29; i++) {
        a24 = a24 + 1;
        sum97 = sum97;
        sum97 = a24 - a45;
    }
}
int main() { test_func(); return 0; }

