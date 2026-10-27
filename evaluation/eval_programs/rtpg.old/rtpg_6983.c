// RTPG_6983: vars=8 stmts=5
void test_func(void) {
    int z67 = 73;
    int out96 = 5;
    int prev11 = 4;
    int tmp46 = 30552;
    int val14 = 74;
    int hi19 = 5754;
    int sum72 = 2;
    int y17 = 26;
    int i;
    for (i = 0; i < 20; i++) {
        sum72 = hi19 + out96;
        z67 = z67 - 5;
        sum72 = hi19 - y17;
        z67 = tmp46 - z67;
        y17 = prev11;
        if (prev11 > 33) goto done;
    }
done:
    sum72 = 0;
}
int main() { test_func(); return 0; }

