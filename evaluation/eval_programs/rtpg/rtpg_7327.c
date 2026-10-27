// RTPG_7327: vars=4 stmts=6
void test_func(void) {
    int dat24 = 7;
    int lo38 = 93;
    int b83 = 29;
    int c31 = 10;
    int i;
    for (i = 0; i < 86; i++) {
        b83 = b83 - b83;
        b83 = b83 + dat24;
        b83 = lo38;
        lo38 = lo38 - b83;
        dat24 = dat24 + dat24;
        dat24 = lo38 + dat24;
    }
}
int main() { test_func(); return 0; }

