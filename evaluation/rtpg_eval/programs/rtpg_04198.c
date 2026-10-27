int test_func(void) {
    int v0 = 40;
    int v1 = 73;
    int v2 = 43;
    int v3 = 1;
    int v4 = 33;
    int v5 = 42;
    int v6 = 73;
    int i;
    for (i = 0; i < 5; i++) {
        v6 = v6 + v4;
    }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
