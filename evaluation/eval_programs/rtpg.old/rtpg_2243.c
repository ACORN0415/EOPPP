// RTPG_2243: vars=5 stmts=3
void test_func(void) {
    int hi86 = 57950;
    int hi89 = -14;
    int lo27 = 7;
    int hi37 = 32;
    int z72 = 3;
    int *ptr = &lo27;
    int i;
    for (i = 0; i < 98; i++) {
        lo27 = z72 + lo27;
        z72 = z72 + 1;
        hi37 = hi37 + 1;
        *ptr = *ptr + 1;
        if (lo27 != 9) {
        hi89 = z72 - 25102;
        }
    }
}
int main() { test_func(); return 0; }

