// RTPG_1345: vars=6 stmts=5
void test_func(void) {
    int y82 = 4;
    float a13 = 36.63;
    int c20 = 10;
    int x60 = 9;
    float y30 = 16.40;
    double acc87 = 23.42;
    int *ptr = &x60;
    int i;
    for (i = 0; i < 87; i++) {
        a13 = a13 - 3;
        a13 = x60 + 39;
        acc87 = acc87 + 1;
        y82 = x60 + a13;
        y82 = c20 - 35;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

