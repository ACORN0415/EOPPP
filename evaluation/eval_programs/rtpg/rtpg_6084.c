// RTPG_6084: vars=3 stmts=5
void test_func(void) {
    int val22 = 25;
    int prev70 = 6;
    int a50 = 16;
    int i;
    for (i = 0; i < 42; i++) {
        prev70 = val22 + val22;
        val22 = val22;
        a50 = a50 - 5;
        prev70 = prev70 - 3;
        val22 = val22 - 2;
    }
}
int main() { test_func(); return 0; }

