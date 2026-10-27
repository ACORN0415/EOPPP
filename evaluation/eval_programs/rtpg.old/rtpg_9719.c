// RTPG_9719: vars=5 stmts=4
void test_func(void) {
    int res79 = -10;
    int sum85 = -40;
    int c32 = 9;
    int prev4 = 68;
    int prev39 = 45614;
    int i;
    for (i = 0; i < 41; i++) {
        sum85 = prev4 - prev4;
        prev39 = c32 - prev4;
        prev39 = sum85;
        prev4 = prev4 - sum85;
    }
}
int main() { test_func(); return 0; }

