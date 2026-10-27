// RTPG_5385: vars=5 stmts=7
void test_func(void) {
    int x14 = 62;
    int acc96 = 43;
    int v42 = 72;
    int tmp64 = 7;
    int res85 = 1;
    int *ptr = &acc96;
    int i;
    for (i = 0; i < 40; i++) {
        v42 = v42 + 40;
        x14 = x14 - 2;
        x14 = x14 - 2;
        tmp64 = x14 + acc96;
        res85 = x14 - res85;
        res85 = res85 + 2;
        v42 = v42 - 3;
        *ptr = *ptr + 4;
        if (acc96 != 95) {
        tmp64 = acc96 - 2;
        }
    }
}
int main() { test_func(); return 0; }

