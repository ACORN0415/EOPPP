// RTPG_8929: vars=5 stmts=3
void test_func(void) {
    int x22 = 305;
    double out77 = 47.24;
    int x17 = 35;
    double cur53 = 12.95;
    int prev23 = 4;
    int i;
    for (i = 0; i < 94; i++) {
        out77 = x22 & out77;
        prev23 = prev23 - 4;
        cur53 = cur53 | cur53;
    }
}
int main() { test_func(); return 0; }

