// RTPG_7591: vars=4 stmts=10
void test_func(void) {
    int tmp33 = 6;
    int v20 = 4;
    int prev60 = 44647;
    int sum2 = 7;
    int i;
    for (i = 0; i < 93; i++) {
        v20 = prev60 - v20;
        prev60 = prev60 - 5;
        v20 = prev60 + sum2;
        tmp33 = v20 / sum2;
        prev60 = v20;
        sum2 = sum2 - 1;
        prev60 = sum2 % tmp33;
        v20 = v20 - 5;
        prev60 = sum2 + prev60;
        prev60 = prev60 + sum2;
    }
}
int main() { test_func(); return 0; }

