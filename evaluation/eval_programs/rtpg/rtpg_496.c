// RTPG_496: vars=3 stmts=2
void test_func(void) {
    int c55 = 13;
    int x73 = 9;
    int tmp53 = 31533;
    int *ptr = &tmp53;
    int i;
    for (i = 0; i < 65; i++) {
        tmp53 = c55 - x73;
        c55 = c55 + 49654;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

