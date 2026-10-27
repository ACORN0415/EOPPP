// RTPG_2755: vars=3 stmts=7
void test_func(void) {
    int cur90 = 1;
    int cur68 = 43;
    int a42 = 22;
    int i;
    for (i = 0; i < 45; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        cur68 = cur68 + -9;
        cur68 = cur90;
        cur90 = cur90;
        cur68 = a42 + cur68;
        a42 = cur90 + cur90;
        a42 = a42;
        a42 = cur68 - a42;
        }
    }
}
int main() { test_func(); return 0; }

