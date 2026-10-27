// RTPG_8038: vars=3 stmts=2
void test_func(void) {
    int acc89 = 1;
    int tmp9 = 41414;
    int v14 = 88;
    int i;
    for (i = 0; i < 11; i++) {
        v14 = v14 - 1;
        acc89 = v14;
    }
}
int main() { test_func(); return 0; }

