// RTPG_9245: vars=6 stmts=5
void test_func(void) {
    int val77 = 96;
    int hi87 = 14;
    int acc42 = -2;
    double cur65 = 19.15;
    int v80 = 5;
    int acc56 = 50913;
    int *ptr = &acc56;
    int i;
    for (i = 0; i < 98; i++) {
        acc42 = acc42 + 1;
        cur65 = cur65 - 4;
        cur65 = cur65 - 3;
        acc56 = hi87;
        cur65 = acc56;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

