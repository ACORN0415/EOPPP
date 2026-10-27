// RTPG_5840: vars=4 stmts=2
void test_func(void) {
    int val4 = 6191;
    int sum38 = 5;
    int dat43 = -39;
    int a38 = 6;
    int *ptr = &a38;
    int i;
    for (i = 0; i < 6; i++) {
        val4 = dat43 - sum38;
        val4 = dat43 + a38;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

