// RTPG_9527: vars=5 stmts=5
void test_func(void) {
    int prev30 = 38;
    int sum91 = -30;
    int hi28 = 61;
    int sum3 = 100;
    int prev60 = -39;
    int i;
    for (i = 0; i < 100; i++) {
        prev30 = sum3;
        prev60 = sum3 + 51;
        prev60 = sum3;
        sum3 = sum91 - 0;
        prev60 = prev60 + 1;
    }
}
int main() { test_func(); return 0; }

