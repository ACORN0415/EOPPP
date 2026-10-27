// RTPG_9101: vars=4 stmts=3
void test_func(void) {
    float c72 = 49.04;
    double hi45 = 79.92;
    int cnt96 = 4;
    int tmp27 = 12;
    int i;
    for (i = 0; i < 75; i++) {
        cnt96 = tmp27 + 3;
        tmp27 = hi45;
        cnt96 = tmp27 + c72;
        if (cnt96 != 22) {
        c72 = c72 - 2;
        }
    }
}
int main() { test_func(); return 0; }

