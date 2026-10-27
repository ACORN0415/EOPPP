// RTPG_6690: vars=6 stmts=5
void test_func(void) {
    int x41 = 5;
    int x79 = 23;
    int b65 = -38;
    int cur29 = 45558;
    int x4 = 29;
    int cnt72 = 32;
    int i;
    for (i = 0; i < 76; i++) {
        cnt72 = cnt72 ^ cur29;
        x4 = b65;
        b65 = b65 + 5;
        x41 = x4 & cnt72;
        b65 = cnt72 + 4;
    }
}
int main() { test_func(); return 0; }

