// RTPG_1780: vars=4 stmts=2
void test_func(void) {
    int prev64 = 57;
    int cur57 = 1;
    int x10 = -30;
    int sum32 = 10;
    int i;
    for (i = 0; i < 30; i++) {
        sum32 = prev64 % prev64;
        prev64 = prev64 ^ cur57;
        if (sum32 > 20) {
        x10 = x10 + 3;
        }
    }
}
int main() { test_func(); return 0; }

