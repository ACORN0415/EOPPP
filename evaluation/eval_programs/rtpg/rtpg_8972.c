// RTPG_8972: vars=5 stmts=5
void test_func(void) {
    int hi79 = 42855;
    int sum55 = 44;
    int v18 = 32;
    int a49 = 3;
    int a30 = 11;
    int *ptr = &hi79;
    int i;
    for (i = 0; i < 59; i++) {
        a30 = v18;
        a30 = a30 - 1;
        a30 = a30 - 3;
        sum55 = a30 - a30;
        a49 = a49;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

