// RTPG_3443: vars=4 stmts=5
void test_func(void) {
    int res82 = 7;
    int cnt85 = 15960;
    float z53 = 18.95;
    int cnt70 = 50;
    int i;
    for (i = 0; i < 81; i++) {
        z53 = cnt70;
        cnt85 = z53 ^ cnt70;
        res82 = cnt85 + cnt70;
        cnt85 = cnt70 - 47;
        z53 = z53 | res82;
    }
}
int main() { test_func(); return 0; }

