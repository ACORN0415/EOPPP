// RTPG_134: vars=6 stmts=2
void test_func(void) {
    int hi32 = 10;
    int out45 = 60;
    int lo39 = 16;
    int out0 = 14001;
    int out76 = 75;
    int dat36 = 21846;
    int i;
    for (i = 0; i < 61; i++) {
        hi32 = out45;
        hi32 = out45 - out45;
    }
}
int main() { test_func(); return 0; }

