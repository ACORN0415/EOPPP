int test_func(void) {
    int v0 = 12;
    int v1 = 83;
    int v2 = 50;
    int v3 = 11;
    int v4 = 6;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v1;
    }
    v3 = v3 + v2;
    if (v0 > v1) { v0 = v1; }
    v3 = v3 - v4;
    return v0;
}
int main(void) { return test_func(); }
