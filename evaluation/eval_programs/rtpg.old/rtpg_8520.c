// RTPG_8520: vars=4 stmts=6
void test_func(void) {
    float acc53 = 34.94;
    int res63 = 38752;
    float out52 = 58.65;
    int sum74 = 49740;
    int *ptr = &out52;
    int i;
    for (i = 0; i < 40; i++) {
        acc53 = out52;
        out52 = out52 + 3;
        res63 = res63 + 2;
        out52 = acc53 + 5331;
        sum74 = sum74 + 2;
        out52 = out52 - -9;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

