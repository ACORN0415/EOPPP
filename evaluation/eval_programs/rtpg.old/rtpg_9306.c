// RTPG_9306: vars=7 stmts=5
void test_func(void) {
    int c19 = 44;
    int v66 = 61523;
    int a8 = 1;
    int v9 = 86;
    int out49 = -44;
    int b43 = 0;
    int v59 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        v66 = v66 + 5;
        c19 = c19 + 2;
        b43 = b43 + 3;
        v59 = a8 - c19;
        a8 = out49 + a8;
    }
}
int main() { test_func(); return 0; }

