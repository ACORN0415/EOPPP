// RTPG_9282: vars=4 stmts=5
void test_func(void) {
    int a75 = 23;
    int sum37 = 23;
    int b66 = 53;
    int cur45 = 10;
    int i;
    for (i = 0; i < 71; i++) {
        cur45 = sum37 / a75;
        cur45 = b66 ^ a75;
        sum37 = a75 + sum37;
        b66 = sum37;
        cur45 = a75 - cur45;
        if (b66 > -7) {
        b66 = b66 + 1;
        }
    }
}
int main() { test_func(); return 0; }

