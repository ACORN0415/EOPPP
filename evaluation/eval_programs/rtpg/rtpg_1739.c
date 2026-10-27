// RTPG_1739: vars=3 stmts=2
void test_func(void) {
    int out74 = 5;
    int x55 = 50;
    int acc10 = -20;
    int i;
    for (i = 0; i < 54; i++) {
        acc10 = acc10 - 2;
        x55 = x55 - 5;
        if (acc10 >= -46) {
        x55 = out74 + 25;
        }
    }
}
int main() { test_func(); return 0; }

