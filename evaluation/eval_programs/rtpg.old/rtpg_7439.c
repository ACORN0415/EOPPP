// RTPG_7439: vars=3 stmts=8
void test_func(void) {
    int b30 = 33;
    int lo65 = 48577;
    int out42 = 30713;
    int i;
    for (i = 0; i < 71; i++) {
        b30 = lo65 - b30;
        out42 = out42 + 4;
        b30 = b30;
        lo65 = out42 ^ lo65;
        b30 = out42 + 47;
        lo65 = lo65 / b30;
        out42 = out42 + 1;
        out42 = b30 - b30;
    }
}
int main() { test_func(); return 0; }

