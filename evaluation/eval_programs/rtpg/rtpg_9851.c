// RTPG_9851: vars=3 stmts=4
void test_func(void) {
    int b41 = 5;
    int acc96 = 2;
    int x85 = 7;
    int i;
    for (i = 0; i < 97; i++) {
        b41 = x85 - b41;
        x85 = b41 - b41;
        acc96 = acc96 + 3;
        x85 = acc96 - b41;
    }
}
int main() { test_func(); return 0; }

