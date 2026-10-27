// RTPG_7519: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int b74 = 51;
    int z64 = 30;
    int out10 = 71;
    int *ptr = &z64;
    int i;
    for (i = 0; i < 54; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        b74 = z64;
        z64 = b74 + z64;
        b74 = z64 + b74;
        z64 = z64 - 73;
        z64 = b74 + z64;
        }
    }
}
int main() { test_func(); return 0; }

