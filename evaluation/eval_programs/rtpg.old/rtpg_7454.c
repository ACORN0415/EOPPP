// RTPG_7454: vars=6 stmts=3
void test_func(void) {
    int prev30 = 14294;
    int c41 = 53;
    int tmp42 = 12;
    int lo3 = -28;
    int b60 = 39066;
    int cur4 = 54151;
    int i;
    for (i = 0; i < 16; i++) {
        switch (cur4) {
            case 0: b60 = 42; break;
            case 1: prev30 = 49508; break;
            case 2: b60 = 4; break;
            case 3: b60 = 7; break;
            default: break;
        }
        cur4 = cur4 + 1;
    }
}
int main() { test_func(); return 0; }

