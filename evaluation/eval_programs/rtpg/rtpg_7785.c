// RTPG_7785: vars=4 stmts=2
void test_func(void) {
    int a71 = 36;
    int acc32 = 60;
    int b71 = 56838;
    int hi43 = 4;
    int i;
    for (i = 0; i < 22; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        a71 = a71 + 2;
        hi43 = a71 + 42066;
        }
    }
}
int main() { test_func(); return 0; }

