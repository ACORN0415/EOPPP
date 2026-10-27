// RTPG_7544: vars=6 stmts=4
void test_func(void) {
    int acc57 = 17068;
    int hi79 = -28;
    int a8 = 32260;
    int dat89 = 1;
    int y31 = 31;
    int lo36 = 1245;
    int *ptr = &dat89;
    int i;
    for (i = 0; i < 73; i++) {
        acc57 = hi79 - acc57;
        y31 = acc57;
        acc57 = dat89 + dat89;
        acc57 = acc57 + y31;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

