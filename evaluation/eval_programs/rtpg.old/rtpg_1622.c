// RTPG_1622: vars=5 stmts=4
void test_func(void) {
    int val8 = 22;
    int tmp85 = 94;
    int val12 = 2;
    int x34 = 88;
    int sum51 = 2;
    int i;
    for (i = 0; i < 63; i++) {
        tmp85 = x34 + sum51;
        val12 = val12 + val8;
        x34 = tmp85 - val12;
        sum51 = tmp85 - val8;
        if (val12 != 72) {
        x34 = tmp85 + val8;
        }
    }
}
int main() { test_func(); return 0; }

