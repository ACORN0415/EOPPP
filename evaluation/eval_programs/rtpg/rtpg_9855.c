// RTPG_9855: vars=3 stmts=5
void test_func(void) {
    int x90 = 21457;
    int dat20 = 9;
    int z13 = 44633;
    int i;
    for (i = 0; i < 10; i++) {
        dat20 = z13 - x90;
        z13 = x90 + dat20;
        dat20 = x90 - z13;
        z13 = dat20;
        dat20 = z13;
    }
}
int main() { test_func(); return 0; }

