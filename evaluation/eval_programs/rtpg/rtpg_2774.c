// RTPG_2774: vars=4 stmts=7
void test_func(void) {
    int a89 = 27138;
    int sum43 = 9;
    int tmp61 = -14;
    int cur93 = 7;
    int *ptr = &sum43;
    int i;
    for (i = 0; i < 43; i++) {
        sum43 = cur93 + sum43;
        a89 = tmp61 & sum43;
        sum43 = cur93;
        tmp61 = a89 + tmp61;
        cur93 = tmp61 - cur93;
        sum43 = a89 % tmp61;
        cur93 = cur93 - 5;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

