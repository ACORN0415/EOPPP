// RTPG_5846: vars=5 stmts=6
void test_func(void) {
    int b45 = -2;
    int z19 = 8;
    int lo97 = 15;
    int z48 = 27;
    int hi42 = 9;
    int i;
    for (i = 0; i < 20; i++) {
        b45 = z48 % z48;
        hi42 = lo97 ^ b45;
        hi42 = lo97 | hi42;
        hi42 = z48 + 29;
        z48 = b45 + hi42;
        b45 = hi42 - 29;
    }
}
int main() { test_func(); return 0; }

