// RTPG_449: vars=4 stmts=3
void test_func(void) {
    int acc89 = 7;
    int z52 = 9641;
    int val64 = 6;
    int v0 = 72;
    int i;
    for (i = 0; i < 12; i++) {
        z52 = z52 - acc89;
        acc89 = acc89 - z52;
        z52 = z52 - 13;
    }
}
int main() { test_func(); return 0; }

