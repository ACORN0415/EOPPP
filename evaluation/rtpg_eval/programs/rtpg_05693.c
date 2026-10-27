int test_func(void) {
    int v0 = 0;
    int v1 = 43;
    int v2 = 15;
    int v3 = 71;
    int v4 = 45;
    int v5 = 28;
    int v6 = 77;
    int i;
    v0 = v0 - v5;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 10; i++) {
        v3 = v3 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
