// RTPG_5845: vars=5 stmts=2
void test_func(void) {
    int cnt65 = 1;
    int cnt1 = 61;
    int cnt56 = 43541;
    int x90 = 27059;
    int z44 = 52365;
    int *ptr = &cnt65;
    int i;
    for (i = 0; i < 21; i++) {
        cnt65 = cnt65 + 3;
        z44 = cnt65 + cnt56;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

