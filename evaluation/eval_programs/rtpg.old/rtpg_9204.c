// RTPG_9204: vars=4 stmts=7
void test_func(void) {
    int v57 = 47283;
    int x24 = 10;
    int acc80 = 23005;
    int res94 = 67;
    int i;
    for (i = 0; i < 14; i++) {
        v57 = res94;
        x24 = v57;
        acc80 = x24 + res94;
        x24 = acc80 + -32;
        x24 = x24 + x24;
        acc80 = x24;
        acc80 = acc80 - x24;
    }
}
int main() { test_func(); return 0; }

