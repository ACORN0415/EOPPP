// RTPG_5026: vars=3 stmts=8
void test_func(void) {
    int z73 = 10;
    int val22 = 8398;
    int prev17 = 57;
    int i;
    for (i = 0; i < 37; i++) {
        prev17 = z73 - 19;
        val22 = prev17 + val22;
        z73 = z73 + 46;
        z73 = z73 - 1;
        val22 = val22 - 1;
        z73 = prev17 & z73;
        z73 = z73 / val22;
        prev17 = z73 + val22;
    }
}
int main() { test_func(); return 0; }

