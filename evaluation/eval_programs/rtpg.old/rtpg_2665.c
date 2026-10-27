// RTPG_2665: vars=3 stmts=6
void test_func(void) {
    int lo52 = 5;
    int prev1 = 65429;
    int cur61 = 34494;
    int *ptr = &cur61;
    int i;
    for (i = 0; i < 95; i++) {
        prev1 = lo52;
        lo52 = lo52 + 5;
        cur61 = lo52 + prev1;
        prev1 = cur61 - 37620;
        cur61 = cur61 + 1;
        lo52 = cur61 - prev1;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

