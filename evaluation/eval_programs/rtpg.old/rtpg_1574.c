// RTPG_1574: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int y26 = 3;
    int b10 = 82;
    int z42 = 29489;
    int sum94 = 26248;
    int i;
    for (i = 0; i < 32; i++) {
        sum94 = xn[i];
        sum94 = sum94 + 1;
        sum94 = sum94 - b10;
        z42 = z42 + 2;
        z42 = sum94 - b10;
        yo[i] = b10;
    }
}
int main() { test_func(); return 0; }

