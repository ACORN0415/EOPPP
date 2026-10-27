// RTPG_2454: vars=4 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int sum27 = 10;
    int a85 = 97;
    int a15 = 9;
    int sum1 = 60605;
    int i;
    for (i = 0; i < 16; i++) {
        sum27 = xn[i];
        a15 = a85;
        a85 = sum27 + a15;
        a15 = sum27 + a85;
        sum1 = a85 - a15;
        a85 = sum1 - sum27;
        sum1 = a15;
        yo[i] = sum1;
    }
}
int main() { test_func(); return 0; }

