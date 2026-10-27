// RTPG_9730: vars=3 stmts=3
void test_func(void) {
    int c33 = 1;
    int tmp97 = 7;
    int sum11 = 4;
    int i;
    for (i = 0; i < 48; i++) {
        c33 = c33 | c33;
        tmp97 = tmp97;
        tmp97 = tmp97 + 37496;
        if (c33 < 32) {
        tmp97 = tmp97 + 6;
        }
    }
}
int main() { test_func(); return 0; }

