// RTPG_7990: vars=5 stmts=5
void test_func(void) {
    int sum86 = 1;
    int out83 = 40964;
    int val50 = 33;
    int acc79 = 1;
    int lo36 = -22;
    int i;
    for (i = 0; i < 15; i++) {
        sum86 = val50 - out83;
        out83 = val50 + lo36;
        val50 = sum86;
        sum86 = sum86 + 3;
        lo36 = acc79 - lo36;
        if (val50 <= 84) {
        lo36 = sum86 - 3;
        }
    }
}
int main() { test_func(); return 0; }

