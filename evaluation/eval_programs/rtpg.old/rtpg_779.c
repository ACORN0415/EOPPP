// RTPG_779: vars=4 stmts=4
void test_func(void) {
    float a58 = 21.93;
    int sum65 = 7744;
    float v54 = 28.35;
    int v67 = 40;
    int *ptr = &sum65;
    int i;
    for (i = 0; i < 39; i++) {
        v54 = v54 - 6;
        a58 = a58;
        sum65 = sum65;
        v54 = sum65 - 75;
        *ptr = *ptr + 4;
        if (sum65 >= 90) {
        a58 = v54 + sum65;
        }
    }
}
int main() { test_func(); return 0; }

