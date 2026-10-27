// RTPG_7355: vars=3 stmts=2
void test_func(void) {
    int a31 = 75;
    int lo11 = 32605;
    int v1 = 35;
    int *ptr = &v1;
    int i;
    for (i = 0; i < 86; i++) {
        a31 = lo11 - v1;
        lo11 = lo11 - 4;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

