// RTPG_7895: vars=5 stmts=5
void test_func(void) {
    int acc79 = 1;
    int lo36 = 40964;
    int val50 = 33;
    int out83 = 1;
    int sum86 = -22;
    int i;
    for (i = 0; i < 15; i++) {
        acc79 = val50 - lo36;
        lo36 = val50 + sum86;
        val50 = acc79;
        acc79 = acc79 + 3;
        sum86 = out83 - sum86;
        if (val50 <= 84) {
        sum86 = acc79 - 3;
        }
    }
}
int main() { test_func(); return 0; }

