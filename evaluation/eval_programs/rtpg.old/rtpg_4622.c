// RTPG_4622: vars=4 stmts=5
void test_func(void) {
    int hi8 = 52;
    int hi9 = 82;
    int x39 = 8101;
    int tmp99 = 52625;
    int i;
    for (i = 0; i < 7; i++) {
        tmp99 = hi9 - x39;
        x39 = tmp99 + hi8;
        hi9 = hi9 + 7184;
        x39 = hi9 - hi9;
        tmp99 = hi9 + hi9;
        if (hi8 == -3) {
        hi8 = hi9 + tmp99;
        }
    }
}
int main() { test_func(); return 0; }

