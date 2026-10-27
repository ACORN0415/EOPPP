// RTPG_989: vars=3 stmts=2
void test_func(void) {
    int x47 = 5;
    int prev30 = 84;
    int z71 = 87;
    int *ptr = &z71;
    int i;
    for (i = 0; i < 11; i++) {
        prev30 = x47 % prev30;
        prev30 = prev30 + x47;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

