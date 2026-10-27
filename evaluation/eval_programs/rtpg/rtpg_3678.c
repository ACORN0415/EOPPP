// RTPG_3678: vars=3 stmts=5
void test_func(void) {
    int out96 = -14;
    int b40 = 4194;
    int x62 = 22883;
    int *ptr = &x62;
    int h0 = 29;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 10; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        out96 = x62 + 59;
        out96 = out96 - x62;
        x62 = b40 - 9;
        out96 = x62 + -50;
        out96 = x62;
        }
    }
}
int main() { test_func(); return 0; }

