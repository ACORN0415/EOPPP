// RTPG_6596: vars=4 stmts=7
void test_func(void) {
    int val28 = 1;
    int x16 = -27;
    int val51 = 4905;
    int cnt28 = 3;
    int i;
    for (i = 0; i < 19; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        val28 = cnt28 + x16;
        x16 = cnt28;
        val28 = val28 + 3;
        val51 = cnt28 - x16;
        x16 = x16 - 2;
        cnt28 = x16 + -43;
        val28 = val28 + 3;
        }
    }
}
int main() { test_func(); return 0; }

