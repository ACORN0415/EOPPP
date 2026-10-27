// RTPG_525: vars=3 stmts=3
void test_func(void) {
    int out57 = 10;
    int v79 = -14;
    int cur97 = 79;
    int i;
    for (i = 0; i < 41; i++) {
        cur97 = cur97 - 5;
        v79 = out57;
        v79 = out57 + cur97;
    }
}
int main() { test_func(); return 0; }

