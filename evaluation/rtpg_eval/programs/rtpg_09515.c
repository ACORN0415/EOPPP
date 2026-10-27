int test_func(void) {
    int v0 = 48;
    int v1 = 43;
    int v2 = 51;
    int v3 = 73;
    int v4 = 8;
    int v5 = 42;
    int v6 = 74;
    int i;
    if (v2 > v4) { v2 = v4; }
    v5 = v5 * 5;
    v5 = v5 + v0;
    for (i = 0; i < 7; i++) {
        v6 = v6 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
