// RTPG_8619: vars=3 stmts=3
void test_func(void) {
    int lo85 = 1;
    float a27 = 29.52;
    int out41 = 3;
    int i;
    for (i = 0; i < 17; i++) {
        out41 = a27 + 41959;
        a27 = lo85 + out41;
        lo85 = lo85 + 5;
        if (a27 > 59) {
        out41 = lo85 - out41;
        }
    }
}
int main() { test_func(); return 0; }

