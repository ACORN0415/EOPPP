// RTPG_8716: vars=3 stmts=3
void test_func(void) {
    int prev0 = 59;
    int tmp11 = 8;
    int y16 = 76;
    int i;
    for (i = 0; i < 86; i++) {
        tmp11 = tmp11 + 3;
        prev0 = tmp11 + 7;
        prev0 = prev0 - 2;
        if (tmp11 <= -33) {
        y16 = tmp11 - -34;
        }
    }
}
int main() { test_func(); return 0; }

