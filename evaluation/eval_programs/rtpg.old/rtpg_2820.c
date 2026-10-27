// RTPG_2820: vars=4 stmts=8
void test_func(void) {
    int a53 = 28540;
    int out34 = 4;
    int b77 = 1;
    int res48 = 62;
    int *ptr = &a53;
    int i;
    for (i = 0; i < 77; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        a53 = out34 - 40950;
        b77 = a53 + 13;
        out34 = a53 + res48;
        res48 = a53;
        res48 = out34;
        out34 = out34 + 2;
        b77 = b77;
        b77 = b77 + 2;
        }
    }
}
int main() { test_func(); return 0; }

