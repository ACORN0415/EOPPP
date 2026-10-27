// RTPG_4938: vars=10 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    double res9 = 46.72;
    int sum93 = 25770;
    double b5 = 47.31;
    float c36 = 17.94;
    int val23 = 41223;
    int v68 = -3;
    double out39 = 41.40;
    int hi74 = 23;
    int cur35 = 56;
    float v47 = 97.21;
    int *ptr = &v68;
    int i;
    for (i = 0; i < 16; i++) {
        v47 = xn[i];
        v68 = c36 - 21405;
        res9 = res9 + 2;
        cur35 = v47 + res9;
        v47 = v68;
        cur35 = v68 - res9;
        *ptr = *ptr + 4;
        if (cur35 != 33) {
        cur35 = cur35 + 1;
        }
        yo[i] = hi74;
    }
}
int main() { test_func(); return 0; }

