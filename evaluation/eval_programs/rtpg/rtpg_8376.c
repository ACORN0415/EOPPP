// RTPG_8376: vars=4 stmts=2
void test_func(void) {
    int acc82 = 62182;
    int y61 = 64988;
    int lo29 = 73;
    int x96 = 9;
    int i;
    for (i = 0; i < 48; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        x96 = x96 - 4;
        y61 = x96 - acc82;
        }
    }
}
int main() { test_func(); return 0; }

