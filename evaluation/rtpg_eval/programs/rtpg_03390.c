int test_func(void) {
    int v0 = 55;
    int v1 = 40;
    int v2 = 90;
    int v3 = 99;
    int v4 = 46;
    int v5 = 90;
    int v6 = 27;
    int v7 = 1;
    int i;
    for (i = 0; i < 18; i++) {
        v7 = v7 + v7;
    }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
