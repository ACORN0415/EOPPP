// RTPG_4806: vars=4 stmts=3
void test_func(void) {
    int res64 = 85;
    int y48 = 20;
    int b3 = 19;
    int val30 = 5;
    int i;
    for (i = 0; i < 23; i++) {
        res64 = b3 + res64;
        res64 = res64 + 1;
        b3 = res64 + val30;
    }
}
int main() { test_func(); return 0; }

