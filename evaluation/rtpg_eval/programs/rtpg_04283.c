int test_func(void) {
    int v0 = 75;
    int v1 = 50;
    int v2 = 73;
    int v3 = 60;
    int v4 = 91;
    int v5 = 99;
    int i;
    v5 = v5 + v5;
    v4 = v4 % (v0 + 1);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
