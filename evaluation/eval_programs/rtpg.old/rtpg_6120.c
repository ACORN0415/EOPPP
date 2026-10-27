// RTPG_6120: vars=6 stmts=12
void test_func(void) {
    int out82 = 19;
    int x45 = 24;
    int sum33 = 88;
    int prev54 = 27;
    int out17 = 49;
    int y13 = 67;
    int *ptr = &out82;
    int i;
    for (i = 0; i < 89; i++) {
        out82 = out82 + 2;
        x45 = x45 - 5;
        out17 = x45 + 56381;
        out17 = out17 - 4;
        out17 = y13;
        y13 = out17;
        sum33 = sum33 + 4;
        prev54 = y13 + sum33;
        sum33 = y13 + 15;
        x45 = x45 + 2;
        sum33 = x45;
        out82 = sum33 + out82;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

