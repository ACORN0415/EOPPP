// RTPG_6509: vars=5 stmts=5
void test_func(void) {
    int prev76 = 11334;
    int b29 = 45;
    int out5 = 4;
    int hi78 = 1;
    int y42 = 49155;
    int *ptr = &out5;
    int i;
    for (i = 0; i < 84; i++) {
        y42 = prev76 & out5;
        out5 = hi78 ^ prev76;
        y42 = b29 - out5;
        out5 = prev76 - hi78;
        y42 = prev76 & out5;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

