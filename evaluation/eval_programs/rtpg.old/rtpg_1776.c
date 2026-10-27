// RTPG_1776: vars=4 stmts=5
void test_func(void) {
    int c36 = 7;
    int cur90 = 2;
    int b75 = 10;
    int tmp95 = 60198;
    int i;
    for (i = 0; i < 7; i++) {
        tmp95 = c36 - b75;
        cur90 = b75;
        c36 = cur90 + c36;
        tmp95 = b75;
        c36 = cur90;
    }
}
int main() { test_func(); return 0; }

