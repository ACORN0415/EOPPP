// RTPG_3962: vars=3 stmts=6
void test_func(void) {
    int a44 = -13;
    int acc96 = 61;
    int cnt38 = 11;
    int i;
    for (i = 0; i < 57; i++) {
        acc96 = cnt38;
        cnt38 = a44;
        acc96 = a44;
        a44 = acc96 + cnt38;
        acc96 = a44 + 10;
        cnt38 = a44 + 34518;
    }
}
int main() { test_func(); return 0; }

