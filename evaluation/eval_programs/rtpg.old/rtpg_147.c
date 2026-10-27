// RTPG_147: vars=3 stmts=4
void test_func(void) {
    int a49 = 25773;
    double v91 = 65.85;
    int sum17 = 4148;
    int *ptr = &sum17;
    int i;
    for (i = 0; i < 59; i++) {
        a49 = sum17;
        v91 = sum17 + 9;
        v91 = sum17 - a49;
        a49 = sum17 + a49;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

