// RTPG_7257: vars=4 stmts=6
void test_func(void) {
    int lo38 = 7;
    int b83 = 93;
    int dat24 = 29;
    int c31 = 10;
    int i;
    for (i = 0; i < 86; i++) {
        dat24 = dat24 - dat24;
        dat24 = dat24 + lo38;
        dat24 = b83;
        b83 = b83 - dat24;
        lo38 = lo38 + lo38;
        lo38 = b83 + lo38;
    }
}
int main() { test_func(); return 0; }

