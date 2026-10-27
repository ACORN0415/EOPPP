// RTPG_8874: vars=3 stmts=4
void test_func(void) {
    int a27 = 24;
    int cur86 = 41;
    int cur69 = 65125;
    int i;
    for (i = 0; i < 85; i++) {
        cur69 = cur86 + a27;
        cur69 = cur86 + 43;
        a27 = cur69 + cur86;
        a27 = a27 + cur69;
    }
}
int main() { test_func(); return 0; }

