// RTPG_4836: vars=7 stmts=6
void test_func(void) {
    int acc43 = 26;
    int c20 = 2;
    int v61 = 2;
    int prev13 = 4;
    int hi41 = 4;
    int val42 = 37858;
    int b89 = 19;
    int i;
    for (i = 0; i < 85; i++) {
        hi41 = val42 - prev13;
        acc43 = prev13;
        v61 = hi41;
        c20 = acc43 / hi41;
        prev13 = prev13 % prev13;
        acc43 = hi41 - c20;
        if (val42 < 18) {
        v61 = c20 + 1;
        }
    }
}
int main() { test_func(); return 0; }

