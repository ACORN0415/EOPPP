// RTPG_4036: vars=3 stmts=5
void test_func(void) {
    int c50 = 57;
    int v4 = 6;
    int b71 = 12;
    int i;
    for (i = 0; i < 83; i++) {
        b71 = v4 - b71;
        c50 = b71 - c50;
        v4 = v4 - 4;
        v4 = c50;
        c50 = b71 - v4;
        if (c50 >= 72) {
        b71 = v4 + v4;
        }
    }
}
int main() { test_func(); return 0; }

