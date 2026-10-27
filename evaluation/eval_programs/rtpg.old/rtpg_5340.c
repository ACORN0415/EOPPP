// RTPG_5340: vars=7 stmts=8
void test_func(void) {
    int acc64 = 2;
    int sum39 = -8;
    int v24 = 7;
    int prev73 = -19;
    int x40 = 26191;
    int hi52 = 60721;
    int c79 = 27;
    int i;
    for (i = 0; i < 8; i++) {
        sum39 = sum39 - 1;
        hi52 = c79;
        x40 = x40 - 2;
        c79 = sum39 + x40;
        acc64 = sum39 - hi52;
        prev73 = x40 - prev73;
        acc64 = prev73 + prev73;
        c79 = acc64 + 5;
        if (acc64 >= 64) {
        v24 = v24 + 5;
        }
    }
}
int main() { test_func(); return 0; }

