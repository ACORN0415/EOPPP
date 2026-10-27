// RTPG_7815: vars=4 stmts=3
void test_func(void) {
    int a52 = 48378;
    int res71 = 84;
    int sum25 = 1;
    int dat58 = 58;
    int i;
    for (i = 0; i < 58; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        sum25 = res71 + a52;
        res71 = sum25 + sum25;
        sum25 = res71 - 52;
        }
    }
}
int main() { test_func(); return 0; }

