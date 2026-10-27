// RTPG_3672: vars=8 stmts=7
void test_func(void) {
    int res50 = 84;
    int cur84 = 8;
    int tmp85 = 32;
    int res84 = -42;
    int hi86 = -35;
    int z23 = 6;
    int z57 = 16827;
    int lo92 = 3;
    int *ptr = &tmp85;
    int i;
    for (i = 0; i < 81; i++) {
        hi86 = z57 % cur84;
        tmp85 = lo92 + 2;
        z57 = tmp85 | lo92;
        cur84 = res50 & lo92;
        z23 = res50 | cur84;
        res84 = cur84 + lo92;
        z57 = z57 + cur84;
        *ptr = *ptr + 3;
        if (res84 <= -3) {
        res50 = res50 - 1;
        }
    }
}
int main() { test_func(); return 0; }

