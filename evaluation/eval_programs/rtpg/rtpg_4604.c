// RTPG_4604: vars=5 stmts=8
void test_func(void) {
    int dat85 = 24004;
    int tmp34 = 21;
    int acc66 = 5;
    int y78 = 45674;
    int hi81 = -10;
    int *ptr = &hi81;
    int i;
    for (i = 0; i < 44; i++) {
        dat85 = dat85 + 5;
        dat85 = hi81;
        tmp34 = hi81 + 31;
        hi81 = y78 - tmp34;
        tmp34 = dat85 + 11000;
        y78 = y78 + 4;
        dat85 = dat85;
        y78 = hi81;
        *ptr = *ptr + 5;
        if (hi81 != -6) {
        y78 = y78;
        }
    }
}
int main() { test_func(); return 0; }

