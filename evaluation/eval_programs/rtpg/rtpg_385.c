// RTPG_385: vars=3 stmts=3
void test_func(void) {
    int a80 = 72;
    int dat82 = 6;
    int res13 = 9;
    int i;
    for (i = 0; i < 6; i++) {
        a80 = a80;
        dat82 = a80;
        dat82 = res13;
    }
}
int main() { test_func(); return 0; }

