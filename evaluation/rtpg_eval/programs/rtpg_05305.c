int test_func(void) {
    int v0 = 39;
    int v1 = 73;
    int v2 = 100;
    int v3 = 42;
    int v4 = 58;
    int v5 = 43;
    int v6 = 37;
    int i;
    if (v6 > v5) { v6 = v5; }
    for (i = 0; i < 9; i++) {
        v5 = v5 + v2;
    }
    v4 = 17;
    return v0;
}
int main(void) { return test_func(); }
