// RTPG_4673: vars=4 stmts=5
void test_func(void) {
    int tmp99 = 52;
    int x39 = 82;
    int hi9 = 8101;
    int hi8 = 52625;
    int i;
    for (i = 0; i < 7; i++) {
        hi8 = x39 - hi9;
        hi9 = hi8 + tmp99;
        x39 = x39 + 7184;
        hi9 = x39 - x39;
        hi8 = x39 + x39;
        if (tmp99 == -3) {
        tmp99 = x39 + hi8;
        }
    }
}
int main() { test_func(); return 0; }

