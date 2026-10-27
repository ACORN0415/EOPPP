// RTPG_553: vars=4 stmts=5
void test_func(void) {
    int acc2 = 99;
    int sum15 = 0;
    int out21 = 74;
    int tmp81 = 34;
    int i;
    for (i = 0; i < 6; i++) {
        acc2 = out21 + sum15;
        acc2 = tmp81 + out21;
        out21 = tmp81 + tmp81;
        sum15 = out21;
        out21 = tmp81;
        if (out21 == -10) {
        out21 = tmp81 + out21;
        }
    }
}
int main() { test_func(); return 0; }

