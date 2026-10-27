// RTPG_1518: vars=4 stmts=4
void test_func(void) {
    int cnt73 = 51099;
    int out94 = 8;
    int lo26 = -45;
    int out65 = 72;
    int i;
    for (i = 0; i < 68; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        out94 = lo26 + cnt73;
        lo26 = lo26 + lo26;
        cnt73 = out94;
        lo26 = out94 + lo26;
        }
    }
}
int main() { test_func(); return 0; }

