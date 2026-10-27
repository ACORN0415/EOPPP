// RTPG_3749: vars=3 stmts=7
enum State { SLOW, GREEN, FAST };
void test_func(void) {
    int sum65 = 7;
    int tmp35 = 38;
    int v22 = 6;
    enum State st = SLOW;
    int *ptr = &sum65;
    int i;
    for (i = 0; i < 24; i++) {
        tmp35 = tmp35 - -19;
        v22 = v22;
        v22 = tmp35 - 74;
        v22 = tmp35;
        v22 = sum65 - 93;
        tmp35 = tmp35 - 57328;
        v22 = v22;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

