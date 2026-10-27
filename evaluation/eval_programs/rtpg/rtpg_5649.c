// RTPG_5649: vars=3 stmts=3
void test_func(void) {
    int dat77 = 1;
    int x77 = -11;
    int sum1 = 7;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 13;
    int sv1 = 0;
    int i;
    for (i = 0; i < 65; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        sum1 = sum1 + 3;
        dat77 = dat77 - 2;
        dat77 = sum1 - sum1;
        }
    }
}
int main() { test_func(); return 0; }

