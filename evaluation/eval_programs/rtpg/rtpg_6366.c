// RTPG_6366: vars=7 stmts=8
void test_func(void) {
    int a12 = 83;
    int cur77 = -17;
    int z13 = -13;
    int a80 = -39;
    int z63 = 1;
    int prev95 = 26;
    int z27 = 8;
    int *ptr = &z13;
    int i;
    for (i = 0; i < 31; i++) {
        a12 = cur77 / z13;
        prev95 = z27 | a12;
        z27 = prev95;
        z27 = z27 + 4;
        z63 = z63 - 1;
        z13 = z63 - a12;
        prev95 = a12;
        a80 = cur77 + 6;
        *ptr = *ptr + 2;
        if (a12 != 52) {
        prev95 = prev95 - 2;
        }
    }
}
int main() { test_func(); return 0; }

