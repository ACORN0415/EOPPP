// RTPG_9043: vars=3 stmts=6
void test_func(void) {
    int y17 = 2;
    int dat99 = 77;
    int sum25 = 6;
    int i;
    for (i = 0; i < 41; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        y17 = y17 - 2;
        sum25 = y17 + 45858;
        sum25 = y17 - y17;
        sum25 = sum25 - 96;
        y17 = y17 - dat99;
        y17 = sum25 - sum25;
        }
    }
}
int main() { test_func(); return 0; }

