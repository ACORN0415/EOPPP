// RTPG_3158: vars=5 stmts=9
void test_func(void) {
    int lo30 = 50264;
    int prev28 = 29748;
    int dat42 = 49;
    int z46 = 9;
    int prev66 = 65;
    int i;
    for (i = 0; i < 16; i++) {
        dat42 = dat42 + 2;
        prev28 = lo30 + dat42;
        lo30 = lo30 + 4;
        dat42 = prev66 + 59922;
        prev28 = z46 - lo30;
        prev28 = prev28 - 5;
        z46 = z46 + 3;
        dat42 = prev66;
        lo30 = dat42 + 86;
        if (prev66 == 50) {
        lo30 = lo30 + 1;
        }
    }
}
int main() { test_func(); return 0; }

