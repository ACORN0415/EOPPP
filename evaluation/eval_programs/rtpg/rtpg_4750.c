// RTPG_4750: vars=7 stmts=8
void test_func(void) {
    int cnt86 = 6;
    int b91 = 28;
    int dat31 = 61020;
    int lo27 = 8;
    int prev28 = 28;
    int out33 = 91;
    int cur4 = 43;
    int i;
    for (i = 0; i < 32; i++) {
        cur4 = b91 % lo27;
        prev28 = cnt86 / lo27;
        lo27 = lo27 - 5;
        dat31 = b91;
        cur4 = cnt86;
        prev28 = dat31 % cnt86;
        b91 = dat31 - b91;
        b91 = b91 - 2;
    }
}
int main() { test_func(); return 0; }

