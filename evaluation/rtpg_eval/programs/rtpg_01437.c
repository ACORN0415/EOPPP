int test_func(void) {
    int v0 = 88;
    int v1 = 86;
    int v2 = 23;
    int v3 = 93;
    int v4 = 50;
    int v5 = 3;
    int i;
    v1 = v1 + v4;
    v4 = 83;
    if (v0 > v3) { v0 = v3; }
    return v0;
}
int main(void) { return test_func(); }
