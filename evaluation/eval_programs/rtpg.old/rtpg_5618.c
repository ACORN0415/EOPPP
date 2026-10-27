// RTPG_5618: vars=4 stmts=4
void test_func(void) {
    int a2 = 17787;
    int cnt55 = 45505;
    int sum10 = 44;
    int a78 = -49;
    int i;
    for (i = 0; i < 54; i++) {
        a2 = a78 - sum10;
        cnt55 = a2 - a78;
        a78 = cnt55 - sum10;
        a2 = a2 + 3;
    }
}
int main() { test_func(); return 0; }

