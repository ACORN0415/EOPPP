// RTPG_6137: vars=5 stmts=5
void test_func(void) {
    int tmp2 = 4;
    int lo56 = 12065;
    int tmp29 = 9466;
    int sum40 = 2658;
    int sum16 = 88;
    int i;
    for (i = 0; i < 80; i++) {
        sum16 = sum16 + 1;
        tmp29 = sum40 + 3;
        sum40 = tmp29 + tmp2;
        sum40 = tmp29;
        sum16 = lo56 + sum16;
    }
}
int main() { test_func(); return 0; }

