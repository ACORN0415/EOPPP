// RTPG_4183: vars=4 stmts=5
void test_func(void) {
    int c63 = 7;
    int y33 = 95;
    double tmp79 = 31.65;
    float res12 = 64.40;
    int i;
    for (i = 0; i < 72; i++) {
        tmp79 = c63 + 49307;
        tmp79 = c63 - tmp79;
        res12 = tmp79;
        c63 = y33 + res12;
        res12 = res12 + 4;
    }
}
int main() { test_func(); return 0; }

