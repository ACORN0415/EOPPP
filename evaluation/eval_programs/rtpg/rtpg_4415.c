// RTPG_4415: vars=8 stmts=3
void test_func(void) {
    int v66 = 60;
    int b68 = 4499;
    int c89 = 0;
    int cur65 = 5053;
    int val38 = 32;
    int z89 = 49704;
    int v24 = 3;
    int cnt42 = 0;
    int *ptr = &c89;
    int i;
    for (i = 0; i < 40; i++) {
        z89 = c89 - v66;
        cnt42 = v24 - v66;
        z89 = z89 - 2;
        *ptr = *ptr + 2;
        if (cnt42 >= 21) {
        b68 = v66 + 1;
        }
    }
}
int main() { test_func(); return 0; }

