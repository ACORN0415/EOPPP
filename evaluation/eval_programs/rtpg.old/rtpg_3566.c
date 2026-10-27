// RTPG_3566: vars=4 stmts=9
void test_func(void) {
    int hi68 = -17;
    int x70 = 1;
    int c95 = 53509;
    int a29 = 58857;
    int *ptr = &a29;
    int i;
    for (i = 0; i < 87; i++) {
        c95 = c95 - hi68;
        x70 = hi68 - c95;
        c95 = c95 - 5;
        x70 = a29 - 38;
        c95 = x70 + hi68;
        hi68 = hi68 - a29;
        c95 = c95 - a29;
        a29 = c95;
        c95 = c95;
        *ptr = *ptr + 2;
        if (c95 != 76) {
        a29 = a29 - x70;
        }
    }
done:
    a29 = 0;
}
int main() { test_func(); return 0; }

