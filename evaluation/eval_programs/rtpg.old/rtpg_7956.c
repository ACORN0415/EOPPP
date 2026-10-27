// RTPG_7956: vars=8 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int cur40 = 43161;
    int res48 = 13455;
    int cur54 = 5;
    int res58 = 79;
    int x63 = 32783;
    int v74 = 67;
    int dat29 = 3;
    int x74 = 12;
    int *ptr = &res48;
    int i;
    for (i = 0; i < 32; i++) {
        x74 = xn[i];
        x74 = cur40;
        x63 = v74;
        res48 = res48 + 2;
        *ptr = *ptr + 3;
        if (res58 >= 84) {
        x63 = dat29 + v74;
        }
        yo[i] = cur54;
    }
}
int main() { test_func(); return 0; }

