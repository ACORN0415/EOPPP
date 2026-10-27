// RTPG_3806: vars=5 stmts=2
void test_func(void) {
    int acc38 = 23;
    int cnt8 = 12;
    int sum83 = 3;
    int tmp50 = 17;
    int c34 = 5;
    int *ptr = &acc38;
    int i;
    for (i = 0; i < 38; i++) {
        switch (c34) {
            case 0: sum83 = 23363; break;
            case 1: sum83 = 38185; break;
            case 2: tmp50 = 88; break;
            case 3: c34 = 3; break;
            default: break;
        }
        c34 = c34 + 1;
    }
done:
    sum83 = 0;
}
int main() { test_func(); return 0; }

