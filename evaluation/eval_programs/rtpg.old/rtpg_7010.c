// RTPG_7010: vars=4 stmts=5
void test_func(void) {
    int cnt94 = 46;
    int dat17 = 15;
    int sum72 = 4170;
    int y56 = 42;
    int *ptr = &dat17;
    int i;
    for (i = 0; i < 50; i++) {
        y56 = cnt94 + dat17;
        dat17 = dat17 + 1;
        cnt94 = dat17 + sum72;
        y56 = y56 - 4;
        cnt94 = cnt94 + dat17;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

