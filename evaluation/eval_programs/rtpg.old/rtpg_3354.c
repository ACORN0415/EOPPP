// RTPG_3354: vars=8 stmts=8
void test_func(void) {
    int sum59 = 20;
    int dat51 = 46;
    int prev91 = 53110;
    int c31 = 1;
    int sum83 = 47377;
    int dat29 = -15;
    int a62 = 2;
    int x30 = 29353;
    int i;
    for (i = 0; i < 20; i++) {
        x30 = prev91;
        x30 = sum83 + c31;
        dat51 = sum59 - dat29;
        sum83 = dat51 + c31;
        prev91 = dat51 - sum59;
        c31 = sum83;
        x30 = dat29;
        c31 = sum83 - 24;
    }
}
int main() { test_func(); return 0; }

