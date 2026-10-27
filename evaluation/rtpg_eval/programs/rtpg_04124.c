int test_func(void) {
    int v0 = 64;
    int v1 = 70;
    int v2 = 6;
    int v3 = 42;
    int v4 = 78;
    int v5 = 16;
    int v6 = 8;
    int i;
    v1 = v1 - v0;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
