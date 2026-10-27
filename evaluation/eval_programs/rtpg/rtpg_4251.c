// RTPG_4251: vars=10 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int acc24 = -12;
    int dat33 = 35833;
    int x14 = 25;
    int cnt28 = 19;
    int lo8 = 18;
    int z51 = 5;
    int lo99 = 61425;
    int y46 = 65;
    int acc1 = 4570;
    int prev4 = -16;
    int *ptr = &lo99;
    int i;
    for (i = 0; i < 16; i++) {
        y46 = xn[i];
        dat33 = dat33 + 4;
        acc1 = z51 + lo99;
        *ptr = *ptr + 3;
        yo[i] = lo8;
    }
}
int main() { test_func(); return 0; }

