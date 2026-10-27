// RTPG_2636: vars=3 stmts=5
void test_func(void) {
    int sum23 = 13888;
    int sum82 = 8;
    int res7 = 5;
    int *ptr = &sum23;
    int i;
    for (i = 0; i < 97; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        res7 = sum82 - sum23;
        sum23 = sum23 + res7;
        sum23 = sum23 - 3;
        sum23 = sum82 + res7;
        sum23 = sum23 - res7;
        }
    }
}
int main() { test_func(); return 0; }

