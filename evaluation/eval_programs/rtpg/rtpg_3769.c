// RTPG_3769: vars=3 stmts=2
void test_func(void) {
    int val66 = 82;
    int dat68 = 30146;
    int b21 = 4128;
    int i;
    for (i = 0; i < 78; i++) {
        b21 = dat68;
        dat68 = dat68 + 1;
    }
}
int main() { test_func(); return 0; }

