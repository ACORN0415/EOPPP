// RTPG_5916: vars=3 stmts=9
void test_func(void) {
    int tmp56 = 45916;
    int z53 = 26;
    int prev25 = -35;
    int i;
    for (i = 0; i < 31; i++) {
        prev25 = prev25 + 3;
        z53 = prev25 - 4;
        prev25 = tmp56 - z53;
        prev25 = prev25 + 4;
        z53 = prev25 - -4;
        prev25 = z53 - prev25;
        z53 = tmp56 + prev25;
        z53 = z53;
        z53 = z53 + tmp56;
    }
}
int main() { test_func(); return 0; }

