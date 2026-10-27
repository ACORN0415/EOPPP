int test_func(void) {
    int v0 = 8;
    int v1 = 11;
    int v2 = 73;
    int v3 = 1;
    int v4 = 35;
    int v5 = 77;
    int i;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v4;
    }
    if (v2 > v5) { v2 = v5; }
    v3 = 52;
    return v0;
}
int main(void) { return test_func(); }
