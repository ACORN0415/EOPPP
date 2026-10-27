// RTPG_5155: vars=7 stmts=6
void test_func(void) {
    int cur89 = 1780;
    int prev91 = 0;
    int cur96 = -28;
    int acc48 = 5497;
    int x2 = 18;
    int cur78 = 4;
    int acc22 = 2;
    int i;
    for (i = 0; i < 74; i++) {
        x2 = acc22 - cur89;
        acc22 = cur78 - 28;
        acc48 = acc48 - 1;
        prev91 = prev91 + 5;
        cur78 = x2 + cur96;
        x2 = prev91 - -13;
    }
}
int main() { test_func(); return 0; }

