// RTPG_9385: vars=6 stmts=5
void test_func(void) {
    int cur0 = -14;
    int a63 = 2;
    int cur28 = 0;
    int prev0 = -11;
    int hi64 = 42;
    int lo43 = 0;
    int i;
    for (i = 0; i < 41; i++) {
        hi64 = hi64 - 1;
        prev0 = prev0 + cur0;
        hi64 = cur28;
        cur28 = cur28 + 1;
        cur0 = prev0 - 8;
    }
}
int main() { test_func(); return 0; }

