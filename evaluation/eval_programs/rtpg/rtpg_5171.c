// RTPG_5171: vars=6 stmts=11
void test_func(void) {
    int tmp19 = 1;
    int res31 = 8;
    int sum98 = 38659;
    int sum85 = 25373;
    int sum80 = 7433;
    int cur98 = 21;
    int i;
    for (i = 0; i < 37; i++) {
        sum85 = tmp19 + res31;
        cur98 = tmp19 + tmp19;
        sum98 = sum98;
        sum98 = tmp19;
        res31 = sum85 + sum80;
        sum85 = cur98 - sum80;
        sum80 = sum80 + 5;
        sum80 = tmp19 + res31;
        cur98 = cur98 + 2;
        sum85 = sum80 + tmp19;
        sum80 = sum80;
    }
}
int main() { test_func(); return 0; }

