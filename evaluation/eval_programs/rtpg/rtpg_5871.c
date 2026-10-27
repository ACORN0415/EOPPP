// RTPG_5871: vars=8 stmts=6
void test_func(void) {
    int dat29 = 2724;
    int y81 = 48;
    int cur58 = 17;
    int prev37 = 40;
    int dat32 = 52;
    int acc43 = 7915;
    int acc47 = 3;
    int acc11 = 89;
    int i;
    for (i = 0; i < 83; i++) {
        acc43 = y81 - dat29;
        acc11 = acc11 + 1;
        acc47 = acc47 - 4;
        cur58 = acc43 + dat29;
        dat32 = acc11 + 94;
        dat32 = acc11;
    }
}
int main() { test_func(); return 0; }

