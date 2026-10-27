// RTPG_1748: vars=10 stmts=8
void test_func(void) {
    int y53 = 5;
    int x71 = 20;
    int cur57 = 10;
    int tmp39 = 19;
    int c6 = 32253;
    int dat38 = 9;
    int prev2 = 43;
    int cnt16 = 5;
    int lo16 = 21;
    int prev81 = 2;
    int i;
    for (i = 0; i < 22; i++) {
        cur57 = cur57 - 5;
        cnt16 = cnt16 + y53;
        x71 = x71 - 5;
        prev81 = prev81 - 5;
        x71 = x71 ^ cur57;
        y53 = tmp39 | cur57;
        prev81 = y53;
        cnt16 = x71 - cur57;
    }
}
int main() { test_func(); return 0; }

