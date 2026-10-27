// RTPG_8036: vars=3 stmts=3
void test_func(void) {
    int dat7 = 37531;
    int dat99 = 60809;
    int acc12 = 15718;
    int *ptr = &dat7;
    int i;
    for (i = 0; i < 81; i++) {
        dat7 = dat7 + 4;
        dat7 = dat7;
        acc12 = acc12;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

