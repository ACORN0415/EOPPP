// RTPG_3557: vars=7 stmts=10
void test_func(void) {
    int val13 = 0;
    int val4 = -23;
    int v81 = 25391;
    int b56 = 59999;
    int v88 = 29;
    int a97 = 55658;
    int lo10 = 99;
    int *ptr = &lo10;
    int i;
    for (i = 0; i < 97; i++) {
        lo10 = lo10 + v81;
        val13 = val4 - a97;
        val4 = b56 + 1;
        val13 = val13 - 4;
        a97 = val13 - 57;
        v88 = a97;
        v81 = v81 + val13;
        val13 = val13 - 33;
        v88 = v88 + 3;
        b56 = val4 + 1;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

