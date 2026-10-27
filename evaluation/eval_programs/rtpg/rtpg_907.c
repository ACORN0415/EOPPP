// RTPG_907: vars=3 stmts=8
void test_func(void) {
    int sum52 = 58;
    int prev55 = 39;
    int out13 = 47596;
    int i;
    for (i = 0; i < 49; i++) {
        out13 = out13 - sum52;
        prev55 = sum52;
        out13 = prev55 + out13;
        prev55 = prev55 - 3;
        sum52 = out13 - out13;
        prev55 = prev55 - sum52;
        sum52 = prev55 + 9;
        out13 = prev55 - 18061;
        if (sum52 < -24) {
        prev55 = prev55 + 2;
        }
    }
}
int main() { test_func(); return 0; }

