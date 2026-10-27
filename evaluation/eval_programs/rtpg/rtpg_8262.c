// RTPG_8262: vars=7 stmts=3
void test_func(void) {
    int cur70 = 17;
    int out97 = 3;
    int acc65 = 50660;
    int z73 = 18;
    int res8 = 26;
    int prev93 = 33695;
    int b51 = 18767;
    int *ptr = &z73;
    int i;
    for (i = 0; i < 58; i++) {
        z73 = out97 + cur70;
        b51 = cur70 + 66;
        z73 = out97 + b51;
        *ptr = *ptr + 4;
        if (z73 > 86) {
        res8 = acc65 - prev93;
        }
    }
}
int main() { test_func(); return 0; }

