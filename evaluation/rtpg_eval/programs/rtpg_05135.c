int test_func(void) {
    int v0 = 12;
    int v1 = 45;
    int v2 = 33;
    int v3 = 1;
    int v4 = 87;
    int v5 = 37;
    int v6 = 40;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v0;
    }
    if (v6 > v5) { v6 = v5; }
    return v0;
}
int main(void) { return test_func(); }
