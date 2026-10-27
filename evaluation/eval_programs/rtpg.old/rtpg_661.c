// RTPG_661: vars=7 stmts=6
void test_func(void) {
    int v58 = 52307;
    int v67 = 8;
    int v98 = 2;
    int a0 = 1;
    int cur48 = 43;
    int out65 = 34;
    int c79 = 0;
    int i;
    for (i = 0; i < 99; i++) {
        c79 = v67 - cur48;
        a0 = c79 - a0;
        a0 = v58 + cur48;
        v67 = v67;
        v58 = cur48 + c79;
        a0 = v67 - 47698;
    }
}
int main() { test_func(); return 0; }

