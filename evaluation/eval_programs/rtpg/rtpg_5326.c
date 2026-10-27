// RTPG_5326: vars=4 stmts=4
void test_func(void) {
    int y59 = 1;
    int v67 = 50840;
    int a8 = 5336;
    int cnt41 = 10;
    int i;
    for (i = 0; i < 14; i++) {
        a8 = v67 + cnt41;
        a8 = y59;
        cnt41 = y59 + a8;
        a8 = a8 - 62068;
    }
}
int main() { test_func(); return 0; }

