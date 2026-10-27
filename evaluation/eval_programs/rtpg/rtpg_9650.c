// RTPG_9650: vars=3 stmts=2
void test_func(void) {
    int x53 = -22;
    int hi55 = 7;
    int x11 = 1;
    int i;
    for (i = 0; i < 85; i++) {
        hi55 = x11;
        hi55 = hi55 - x11;
    }
}
int main() { test_func(); return 0; }

