// RTPG_2704: vars=5 stmts=12
void test_func(void) {
    int sum43 = 2;
    int sum66 = 83;
    int sum7 = 93;
    int v57 = -32;
    int x29 = 3;
    int i;
    for (i = 0; i < 54; i++) {
        v57 = x29 + sum66;
        sum7 = x29 + sum7;
        v57 = x29 + 84;
        sum7 = sum43 - v57;
        sum66 = x29;
        sum43 = sum43;
        v57 = sum66;
        sum7 = sum7 + 4;
        x29 = x29 + 2;
        sum7 = sum66;
        sum66 = sum66 - 4;
        sum43 = sum43 - x29;
    }
}
int main() { test_func(); return 0; }

