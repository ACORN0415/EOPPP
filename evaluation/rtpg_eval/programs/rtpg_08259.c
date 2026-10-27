int test_func(void) {
    int v0 = 17;
    int v1 = 77;
    int v2 = 55;
    int v3 = 66;
    int v4 = 85;
    int v5 = 85;
    int v6 = 23;
    int i;
    if (v4 > v2) { v4 = v2; }
    for (i = 0; i < 16; i++) {
        v3 = v3 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
