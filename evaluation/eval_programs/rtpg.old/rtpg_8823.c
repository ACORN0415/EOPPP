// RTPG_8823: vars=6 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int z23 = 43400;
    int val48 = 6798;
    int val25 = 7;
    int cnt25 = -20;
    int lo27 = 4781;
    int v94 = 10;
    int *ptr = &val25;
    int i;
    for (i = 0; i < 16; i++) {
        cnt25 = xn[i];
        v94 = lo27 ^ v94;
        cnt25 = val25 % v94;
        z23 = val48 + cnt25;
        z23 = cnt25 + val25;
        v94 = z23 ^ val48;
        lo27 = lo27 - 1;
        val48 = z23;
        val48 = z23 - val25;
        cnt25 = cnt25 + lo27;
        cnt25 = cnt25 - 3;
        lo27 = z23 - lo27;
        v94 = v94 - 5;
        *ptr = *ptr + 2;
        if (cnt25 != 87) {
        lo27 = v94 + val48;
        }
        yo[i] = val48;
    }
}
int main() { test_func(); return 0; }

