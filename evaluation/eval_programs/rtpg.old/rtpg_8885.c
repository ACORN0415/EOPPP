// RTPG_8885: vars=3 stmts=4
void test_func(void) {
    int val37 = 100;
    int dat22 = -23;
    int z52 = 16994;
    int *ptr = &dat22;
    int i;
    for (i = 0; i < 54; i++) {
        dat22 = val37 ^ dat22;
        z52 = dat22 + val37;
        val37 = dat22 + z52;
        dat22 = val37 / z52;
        *ptr = *ptr + 2;
        if (dat22 != -31) {
        z52 = z52 - z52;
        }
    }
}
int main() { test_func(); return 0; }

