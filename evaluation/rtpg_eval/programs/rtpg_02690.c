int test_func(void) {
    int v0 = 65;
    int v1 = 3;
    int v2 = 87;
    int v3 = 36;
    int v4 = 46;
    int v5 = 53;
    int i;
    v5 = v5 + v1;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v5;
    }
    if (v2 > v1) { v2 = v1; }
    v2 = 22;
    return v0;
}
int main(void) { return test_func(); }
