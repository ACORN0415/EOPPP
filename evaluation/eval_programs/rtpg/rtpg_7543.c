// RTPG_7543: vars=4 stmts=2
void test_func(void) {
    int sum8 = 50864;
    int v66 = 31;
    int y68 = -12;
    int y80 = -18;
    int *ptr = &sum8;
    int i;
    for (i = 0; i < 63; i++) {
        y80 = sum8 + y68;
        sum8 = v66 + -17;
        *ptr = *ptr + 2;
        if (y80 != 81) {
        y68 = v66;
        }
    }
}
int main() { test_func(); return 0; }

