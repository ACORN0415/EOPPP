int test_func(void) {
    int v0 = 42;
    int v1 = 56;
    int v2 = 42;
    int v3 = 59;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v1;
    }
    if (v3 > v0) { v3 = v0; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
