int test_func(void) {
    int v0 = 93;
    int v1 = 19;
    int v2 = 4;
    int v3 = 56;
    int v4 = 29;
    int v5 = 63;
    int i;
    if (v1 > v0) { v1 = v0; }
    v0 = v0 ^ v3;
    return v0;
}
int main(void) { return test_func(); }
