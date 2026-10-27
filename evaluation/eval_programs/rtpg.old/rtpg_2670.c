// RTPG_2670: vars=12 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int z29 = -24;
    int x89 = -36;
    int val11 = 15800;
    int v52 = 31202;
    int v48 = -13;
    int prev47 = 23111;
    int sum30 = -43;
    int acc98 = 5;
    int out79 = 55552;
    int res74 = 25;
    int x94 = 37;
    int tmp8 = -39;
    int *ptr = &prev47;
    int i;
    for (i = 0; i < 16; i++) {
        prev47 = xn[i];
        tmp8 = val11 + x94;
        x94 = out79 - x94;
        res74 = v52 - z29;
        v52 = v52 + v48;
        x94 = x94 - 5;
        x94 = out79 - prev47;
        out79 = v48 + v52;
        v48 = v48 + 1;
        *ptr = *ptr + 4;
        yo[i] = v52;
    }
}
int main() { test_func(); return 0; }

