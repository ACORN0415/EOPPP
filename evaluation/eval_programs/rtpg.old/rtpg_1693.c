// RTPG_1693: vars=4 stmts=3
void test_func(void) {
    int tmp25 = 3;
    int y87 = 60083;
    int prev25 = 25;
    int sum72 = 43;
    int i;
    for (i = 0; i < 59; i++) {
        sum72 = prev25;
        prev25 = prev25 + 40;
        tmp25 = tmp25 + 3;
    }
}
int main() { test_func(); return 0; }

