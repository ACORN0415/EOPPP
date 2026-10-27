// RTPG_9346: vars=5 stmts=7
void test_func(void) {
    int dat30 = 17;
    int hi39 = -49;
    int prev72 = 3;
    int tmp91 = 9;
    int y94 = 62;
    int i;
    for (i = 0; i < 84; i++) {
        y94 = tmp91 - prev72;
        prev72 = tmp91 - prev72;
        dat30 = y94;
        prev72 = dat30 - prev72;
        hi39 = y94 - 8;
        dat30 = dat30 + 5;
        y94 = hi39;
    }
}
int main() { test_func(); return 0; }

