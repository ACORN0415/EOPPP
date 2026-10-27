// RTPG_9797: vars=10 stmts=4
int idx_arr[32];
void test_func(void) {
    float cur25 = 88.32;
    int z23 = 4;
    int b74 = -5;
    int out90 = 18508;
    float c59 = 72.36;
    int x27 = 19;
    int sum33 = 14;
    int v63 = 78;
    int val84 = 2;
    int b12 = 39;
    int *ptr = &b74;
    int i;
    for (i = 0; i < 6; i++) {
        b74 = xn[idx_arr[i]];
        out90 = cur25 - 4;
        b12 = b74 + b74;
        b74 = sum33 - z23;
        sum33 = x27;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

