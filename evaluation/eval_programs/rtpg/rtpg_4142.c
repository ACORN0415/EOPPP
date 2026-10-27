// RTPG_4142: vars=3 stmts=5
void test_func(void) {
    int res17 = 47604;
    int c87 = 19;
    int res63 = 3;
    int i;
    for (i = 0; i < 60; i++) {
        c87 = c87;
        res17 = c87;
        res63 = res63 + 47409;
        res63 = res17;
        c87 = c87 - 25;
        if (res63 <= -1) {
        res63 = c87;
        }
    }
}
int main() { test_func(); return 0; }

