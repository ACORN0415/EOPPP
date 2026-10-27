// RTPG_9468: vars=4 stmts=7
void test_func(void) {
    int cur50 = 27;
    int z36 = 9;
    int b79 = 9;
    int cur64 = 8;
    int *ptr = &b79;
    int i;
    for (i = 0; i < 6; i++) {
        z36 = cur50 - b79;
        cur50 = cur64;
        b79 = cur64 - z36;
        cur64 = b79 % z36;
        z36 = cur50 + z36;
        z36 = b79 | cur64;
        b79 = b79 + 100;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

