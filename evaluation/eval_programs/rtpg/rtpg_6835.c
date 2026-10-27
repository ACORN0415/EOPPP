// RTPG_6835: vars=6 stmts=8
void test_func(void) {
    int hi46 = 7;
    int b68 = 4;
    int b84 = -21;
    int c87 = 43;
    int res37 = 33;
    int a83 = 8;
    int i;
    for (i = 0; i < 7; i++) {
        c87 = res37;
        res37 = res37 - c87;
        c87 = a83 + 22;
        b84 = b84 - a83;
        b84 = c87;
        b68 = res37 + 65250;
        b84 = b84 + 37;
        b68 = a83 - c87;
    }
}
int main() { test_func(); return 0; }

