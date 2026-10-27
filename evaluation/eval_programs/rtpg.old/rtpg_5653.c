// RTPG_5653: vars=4 stmts=11
void test_func(void) {
    int a71 = 14;
    int dat37 = 22692;
    int tmp80 = 15214;
    int out79 = 43;
    int i;
    for (i = 0; i < 97; i++) {
        out79 = out79 + 2;
        dat37 = a71 - tmp80;
        out79 = out79 + 5;
        a71 = tmp80 - a71;
        dat37 = tmp80 - dat37;
        dat37 = dat37 - 2;
        tmp80 = a71 - out79;
        dat37 = a71 - 4;
        dat37 = tmp80 + out79;
        tmp80 = out79 - a71;
        dat37 = tmp80 + a71;
        if (tmp80 == -32) {
        a71 = a71;
        }
    }
}
int main() { test_func(); return 0; }

