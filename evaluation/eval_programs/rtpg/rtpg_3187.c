// RTPG_3187: vars=10 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int z71 = 31;
    int b23 = 84;
    int v98 = 46939;
    int res50 = 33;
    int cnt46 = 4;
    int acc26 = 34144;
    int out39 = 82;
    int acc82 = 1;
    int cnt26 = 23759;
    int sum56 = 57769;
    int *ptr = &b23;
    int i;
    for (i = 0; i < 16; i++) {
        sum56 = xn[i];
        acc82 = res50 - v98;
        v98 = acc26;
        *ptr = *ptr + 4;
        yo[i] = cnt26;
    }
}
int main() { test_func(); return 0; }

