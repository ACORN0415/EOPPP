// RTPG_9297: vars=4 stmts=11
void test_func(void) {
    int a63 = 0;
    int hi74 = 4;
    int v14 = 5;
    int c89 = 9773;
    int i;
    for (i = 0; i < 55; i++) {
        c89 = c89 + 1;
        a63 = c89 + v14;
        hi74 = hi74 + 1;
        v14 = c89 + v14;
        v14 = v14 + a63;
        v14 = v14 + 1;
        c89 = a63 + c89;
        c89 = hi74;
        hi74 = c89;
        v14 = v14 - a63;
        a63 = v14;
        if (a63 >= 36) {
        v14 = v14 - 1;
        }
    }
}
int main() { test_func(); return 0; }

