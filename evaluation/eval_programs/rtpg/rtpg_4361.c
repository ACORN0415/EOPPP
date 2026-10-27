// RTPG_4361: vars=6 stmts=10
void test_func(void) {
    int out89 = 93;
    int c10 = 65;
    int cnt5 = -41;
    int hi77 = 10;
    int b5 = 8;
    int val10 = 82;
    int *ptr = &b5;
    int i;
    for (i = 0; i < 17; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        cnt5 = b5 + cnt5;
        cnt5 = cnt5;
        out89 = c10;
        cnt5 = cnt5;
        out89 = val10 - 98;
        out89 = c10;
        out89 = out89 + cnt5;
        cnt5 = c10;
        b5 = out89 - 2;
        c10 = out89 - b5;
        }
    }
}
int main() { test_func(); return 0; }

