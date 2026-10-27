// RTPG_8417: vars=5 stmts=8
void test_func(void) {
    int sum83 = 27765;
    int x14 = 37098;
    int c32 = 26781;
    int cur15 = 41431;
    int a36 = 7011;
    int *ptr = &c32;
    int i;
    for (i = 0; i < 16; i++) {
        cur15 = x14 - cur15;
        c32 = c32 - cur15;
        x14 = a36 - 46;
        cur15 = cur15 - 1;
        sum83 = cur15 - 55;
        cur15 = x14 - cur15;
        x14 = x14 + 2;
        a36 = x14 - a36;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

