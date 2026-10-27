// RTPG_2010: vars=5 stmts=2
void test_func(void) {
    int b5 = 5;
    int prev40 = 9;
    int val77 = 72;
    int cur52 = 23;
    int b28 = 8537;
    int *ptr = &b5;
    int i;
    for (i = 0; i < 50; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        b5 = b5 - 1;
        b28 = val77 - prev40;
        }
    }
}
int main() { test_func(); return 0; }

