// RTPG_1081: vars=4 stmts=6
void test_func(void) {
    int a95 = -7;
    int res95 = -20;
    int a55 = 59;
    int z99 = 28838;
    int i;
    for (i = 0; i < 13; i++) {
        res95 = res95 + 2;
        z99 = z99 - res95;
        a55 = a95 + -14;
        a55 = res95 ^ z99;
        a95 = a95 - 4;
        a95 = z99 / z99;
    }
}
int main() { test_func(); return 0; }

