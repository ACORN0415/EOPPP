// RTPG_1430: vars=3 stmts=5
void test_func(void) {
    int sum19 = 7;
    int hi26 = 68;
    int tmp77 = 37050;
    int i;
    for (i = 0; i < 63; i++) {
        hi26 = sum19 + hi26;
        tmp77 = hi26 + sum19;
        hi26 = hi26 - tmp77;
        tmp77 = tmp77 - 4;
        tmp77 = tmp77 + 1;
        if (tmp77 >= -13) {
        tmp77 = tmp77 - 4;
        }
    }
}
int main() { test_func(); return 0; }

