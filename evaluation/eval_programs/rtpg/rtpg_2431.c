// RTPG_2431: vars=6 stmts=12
void test_func(void) {
    int y82 = 8;
    int tmp12 = 34;
    int c94 = 6;
    int dat36 = 1;
    int tmp21 = 28832;
    int out92 = -1;
    int i;
    for (i = 0; i < 59; i++) {
        c94 = y82 + out92;
        dat36 = c94 - tmp21;
        y82 = y82;
        c94 = c94 ^ tmp21;
        y82 = dat36 + out92;
        c94 = c94 - 3;
        y82 = c94;
        c94 = c94 + 3;
        c94 = y82 / tmp21;
        dat36 = c94 - y82;
        y82 = y82 - 3;
        dat36 = tmp12;
    }
}
int main() { test_func(); return 0; }

