// RTPG_9479: vars=4 stmts=2
void test_func(void) {
    int sum34 = 41285;
    int y68 = 8;
    int cnt12 = 6;
    int sum24 = 51217;
    int i;
    for (i = 0; i < 51; i++) {
        cnt12 = cnt12 + 5;
        cnt12 = sum34 + cnt12;
    }
}
int main() { test_func(); return 0; }

