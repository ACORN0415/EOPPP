// RTPG_1178: vars=6 stmts=4
void test_func(void) {
    int out77 = 8;
    int cur75 = 3;
    int c70 = 5;
    int out84 = 19108;
    int out9 = 48;
    int hi59 = 34;
    int i;
    for (i = 0; i < 5; i++) {
        hi59 = out77 + 8;
        out9 = out77;
        out77 = out9 + 8;
        out84 = out84 - hi59;
    }
}
int main() { test_func(); return 0; }

