// RTPG_7088: vars=4 stmts=5
void test_func(void) {
    int cnt94 = 46;
    int sum72 = 15;
    int dat17 = 4170;
    int y56 = 42;
    int *ptr = &sum72;
    int i;
    for (i = 0; i < 50; i++) {
        y56 = cnt94 + sum72;
        sum72 = sum72 + 1;
        cnt94 = sum72 + dat17;
        y56 = y56 - 4;
        cnt94 = cnt94 + sum72;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

