// RTPG_7082: vars=5 stmts=4
void test_func(void) {
    int val98 = 34335;
    int sum43 = 7;
    int x24 = 6;
    int sum30 = 46084;
    int sum39 = -46;
    int *ptr = &sum39;
    int i;
    for (i = 0; i < 67; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        sum39 = val98 + x24;
        x24 = sum39;
        x24 = sum30 + sum30;
        sum39 = sum39 + x24;
        }
    }
}
int main() { test_func(); return 0; }

