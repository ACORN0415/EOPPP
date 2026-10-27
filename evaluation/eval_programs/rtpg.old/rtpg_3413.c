// RTPG_3413: vars=4 stmts=5
void test_func(void) {
    int sum77 = -5;
    int y19 = 89;
    int v95 = 28;
    int z37 = -24;
    int i;
    for (i = 0; i < 45; i++) {
        y19 = v95;
        sum77 = sum77 - 3;
        z37 = v95 - sum77;
        z37 = y19;
        sum77 = y19 + sum77;
    }
}
int main() { test_func(); return 0; }

