// RTPG_42: vars=4 stmts=7
void test_func(void) {
    int prev47 = -16;
    int b58 = 73;
    int v80 = 60107;
    int lo22 = 44;
    int i;
    for (i = 0; i < 58; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        b58 = b58 + 1;
        lo22 = lo22 - 2;
        lo22 = v80 - prev47;
        b58 = v80 - 9;
        lo22 = prev47 - prev47;
        lo22 = lo22 - 4;
        prev47 = lo22 + prev47;
        }
    }
}
int main() { test_func(); return 0; }

