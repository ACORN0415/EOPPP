int test_func(void) {
    int v0 = 87;
    int v1 = 10;
    int v2 = 85;
    int v3 = 72;
    int v4 = 87;
    int v5 = 6;
    int i;
    if (v4 > v5) { v4 = v5; }
    for (i = 0; i < 12; i++) {
        v1 = v1 + v1;
    }
    v3 = v3 - v2;
    return v0;
}
int main(void) { return test_func(); }
