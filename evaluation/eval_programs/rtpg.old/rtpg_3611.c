// RTPG_3611: vars=6 stmts=5
void test_func(void) {
    int lo46 = 11;
    int dat34 = 6;
    int out84 = 60919;
    int acc15 = 10233;
    int out71 = 48948;
    int dat37 = 78;
    int *ptr = &acc15;
    int i;
    for (i = 0; i < 96; i++) {
        lo46 = out71 + acc15;
        out84 = lo46 - out84;
        dat37 = dat37 - 4;
        out71 = dat34 & out84;
        dat34 = acc15 - dat34;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

