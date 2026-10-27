// RTPG_5807: vars=8 stmts=7
enum State { RED, ON, BLUE };
void test_func(void) {
    int z60 = 5;
    int sum33 = 97;
    int val3 = 14;
    int cnt14 = 34;
    int v81 = 54829;
    int z87 = 12068;
    int x4 = 3;
    int a82 = 60;
    enum State st = RED;
    int *ptr = &z60;
    int i;
    for (i = 0; i < 83; i++) {
        cnt14 = sum33 - 62826;
        z60 = z60 - 1;
        z87 = cnt14 - 2;
        a82 = v81 - 4;
        val3 = val3 + 4;
        x4 = a82 - 51;
        val3 = z87 - v81;
        *ptr = *ptr + 1;
        if (x4 > -10) goto done;
    }
done:
    x4 = 0;
}
int main() { test_func(); return 0; }

