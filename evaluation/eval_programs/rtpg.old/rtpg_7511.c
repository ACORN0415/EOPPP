// RTPG_7511: vars=4 stmts=10
void test_func(void) {
    int v20 = 6;
    int sum2 = 4;
    int prev60 = 44647;
    int tmp33 = 7;
    int i;
    for (i = 0; i < 93; i++) {
        sum2 = prev60 - sum2;
        prev60 = prev60 - 5;
        sum2 = prev60 + tmp33;
        tmp33 = sum2 / v20;
        prev60 = sum2;
        tmp33 = tmp33 - 1;
        prev60 = tmp33 % sum2;
        sum2 = sum2 - 5;
        prev60 = tmp33 + prev60;
        prev60 = prev60 + tmp33;
    }
}
int main() { test_func(); return 0; }

