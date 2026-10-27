int test_func(void) {
    int v0 = 51;
    int v1 = 34;
    int v2 = 13;
    int v3 = 32;
    int v4 = 65;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v3;
    }
    v4 = v4 + v0;
    if (v1 > v1) { v1 = v1; }
    return v0;
}
int main(void) { return test_func(); }
