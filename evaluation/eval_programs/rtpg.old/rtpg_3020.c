// RTPG_3020: vars=6 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int val47 = 6881;
    int z90 = 7;
    int hi33 = 32;
    int b63 = 9;
    int y55 = 34228;
    int dat27 = 3;
    int *ptr = &val47;
    int i;
    for (i = 0; i < 64; i++) {
        y55 = xn[i];
        y55 = hi33 - y55;
        b63 = y55;
        y55 = val47 - b63;
        b63 = hi33 + hi33;
        hi33 = z90 + dat27;
        b63 = b63 + val47;
        b63 = z90;
        y55 = z90;
        val47 = val47 - 3;
        y55 = y55 - hi33;
        *ptr = *ptr + 5;
        if (b63 <= 17) {
        b63 = y55 - z90;
        }
        yo[i] = hi33;
    }
}
int main() { test_func(); return 0; }

