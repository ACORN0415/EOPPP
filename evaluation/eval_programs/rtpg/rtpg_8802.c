// RTPG_8802: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int x87 = 7;
    int c54 = 49568;
    int x42 = 39;
    int a53 = 45806;
    int i;
    for (i = 0; i < 64; i++) {
        x87 = xn[i];
        a53 = x87 + 3;
        a53 = c54 - x87;
        x42 = a53 + c54;
        x42 = c54 + x87;
        a53 = a53 - x42;
        yo[i] = x87;
    }
}
int main() { test_func(); return 0; }

