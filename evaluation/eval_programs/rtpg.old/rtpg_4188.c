// RTPG_4188: vars=3 stmts=4
void test_func(void) {
    int hi53 = 56494;
    int prev78 = 9;
    int acc61 = 22852;
    int i;
    for (i = 0; i < 94; i++) {
        acc61 = acc61 + 88;
        prev78 = prev78 + acc61;
        acc61 = acc61 - 4;
        prev78 = acc61 + acc61;
        if (hi53 > 75) {
        acc61 = hi53;
        }
    }
}
int main() { test_func(); return 0; }

