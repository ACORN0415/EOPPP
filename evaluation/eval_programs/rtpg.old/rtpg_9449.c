// RTPG_9449: vars=3 stmts=2
void test_func(void) {
    int x11 = -22;
    int x53 = 7;
    int hi55 = 1;
    int i;
    for (i = 0; i < 85; i++) {
        x53 = hi55;
        x53 = x53 - hi55;
    }
}
int main() { test_func(); return 0; }

