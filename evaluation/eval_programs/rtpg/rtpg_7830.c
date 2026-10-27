// RTPG_7830: vars=4 stmts=6
void test_func(void) {
    int acc1 = 10;
    int prev30 = 4;
    int lo28 = -7;
    int hi8 = 17;
    int i;
    for (i = 0; i < 57; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        prev30 = lo28;
        hi8 = acc1 - hi8;
        prev30 = prev30 - 2;
        acc1 = acc1 - 2447;
        acc1 = acc1 + hi8;
        acc1 = prev30 + lo28;
        }
    }
}
int main() { test_func(); return 0; }

