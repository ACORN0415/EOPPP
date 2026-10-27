// RTPG_7004: vars=5 stmts=4
void test_func(void) {
    int sum43 = 34335;
    int sum39 = 7;
    int val98 = 6;
    int sum30 = 46084;
    int x24 = -46;
    int *ptr = &x24;
    int i;
    for (i = 0; i < 67; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        x24 = sum43 + val98;
        val98 = x24;
        val98 = sum30 + sum30;
        x24 = x24 + val98;
        }
    }
}
int main() { test_func(); return 0; }

