int test_func(void) {
    int v0 = 88;
    int v1 = 97;
    int v2 = 83;
    int v3 = 58;
    int v4 = 26;
    int v5 = 73;
    int i;
    if (v3 > v2) { v3 = v2; }
    v4 = v4 + v1;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v2;
    }
    v1 = v1 & v0;
    return v0;
}
int main(void) { return test_func(); }
