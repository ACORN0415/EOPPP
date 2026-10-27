// RTPG_5089: vars=3 stmts=8
void test_func(void) {
    int prev17 = 10;
    int z73 = 8398;
    int val22 = 57;
    int i;
    for (i = 0; i < 37; i++) {
        val22 = prev17 - 19;
        z73 = val22 + z73;
        prev17 = prev17 + 46;
        prev17 = prev17 - 1;
        z73 = z73 - 1;
        prev17 = val22 & prev17;
        prev17 = prev17 / val22;
        val22 = prev17 + z73;
    }
}
int main() { test_func(); return 0; }

