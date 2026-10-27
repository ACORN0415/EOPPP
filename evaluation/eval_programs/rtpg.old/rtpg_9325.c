// RTPG_9325: vars=8 stmts=4
void test_func(void) {
    int y36 = 5;
    int v64 = 5559;
    int v85 = 10;
    int out52 = 95;
    int val18 = 35;
    int b91 = 34;
    int val2 = 84;
    int y83 = 14724;
    int *ptr = &v85;
    int i;
    for (i = 0; i < 27; i++) {
        val18 = y83 + 8;
        out52 = out52 + 5;
        v64 = y36 - b91;
        y36 = y36 + 2;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

