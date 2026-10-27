// RTPG_4699: vars=10 stmts=7
void test_func(void) {
    int sum84 = 21268;
    int res88 = 34;
    int out14 = 99;
    int y85 = 0;
    int cur57 = 32;
    int hi47 = 7;
    int acc42 = 4;
    int cnt85 = 32;
    int b5 = 34;
    int cur51 = 7;
    int i;
    for (i = 0; i < 23; i++) {
        cur57 = y85;
        acc42 = acc42 + out14;
        acc42 = cur51;
        cur57 = acc42 + acc42;
        y85 = hi47 + out14;
        cur51 = cur51 - y85;
        res88 = b5;
        if (cur57 > 40) {
        y85 = cur57 + cnt85;
        }
    }
}
int main() { test_func(); return 0; }

