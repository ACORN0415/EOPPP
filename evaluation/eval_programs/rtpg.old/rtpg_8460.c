// RTPG_8460: vars=5 stmts=7
void test_func(void) {
    int acc64 = 31;
    int b45 = 14197;
    int acc88 = 37;
    int sum99 = 3;
    int c51 = -34;
    int i;
    for (i = 0; i < 57; i++) {
        b45 = b45 - 1;
        acc88 = acc88;
        sum99 = sum99 - 4;
        b45 = b45 - 3;
        acc64 = b45;
        sum99 = sum99 - 5;
        b45 = b45 + acc64;
        if (acc64 == 37) {
        acc88 = acc88 + 11;
        }
    }
}
int main() { test_func(); return 0; }

