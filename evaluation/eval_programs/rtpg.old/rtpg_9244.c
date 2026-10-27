// RTPG_9244: vars=8 stmts=2
void test_func(void) {
    int cur16 = 8;
    int c16 = 50;
    int prev80 = 9;
    int b4 = 22;
    int tmp46 = 99;
    int out49 = 59;
    int b92 = 16;
    int cnt14 = 60;
    int i;
    for (i = 0; i < 68; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        cur16 = c16 - tmp46;
        tmp46 = cnt14;
        }
    }
}
int main() { test_func(); return 0; }

