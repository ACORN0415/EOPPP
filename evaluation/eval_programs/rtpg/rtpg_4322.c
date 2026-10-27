// RTPG_4322: vars=3 stmts=4
void test_func(void) {
    int v30 = 10;
    int cnt61 = 67;
    int acc25 = 7;
    int *ptr = &cnt61;
    int i;
    for (i = 0; i < 45; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        acc25 = acc25 - 2;
        v30 = v30;
        v30 = v30;
        v30 = cnt61;
        }
    }
}
int main() { test_func(); return 0; }

