// RTPG_5346: vars=4 stmts=6
void test_func(void) {
    int acc80 = 2;
    int cur36 = 1;
    double z15 = 16.13;
    int sum19 = 38936;
    int i;
    for (i = 0; i < 31; i++) {
        z15 = sum19 + acc80;
        cur36 = cur36 + sum19;
        cur36 = cur36 + 53;
        cur36 = cur36 + acc80;
        cur36 = cur36 - 4;
        acc80 = z15;
        if (z15 >= -48) {
        cur36 = acc80 + 40155;
        }
    }
}
int main() { test_func(); return 0; }

