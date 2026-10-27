int test_func(void) {
    int v0 = 22;
    int v1 = 83;
    int v2 = 56;
    int v3 = 3;
    int v4 = 85;
    int i;
    v0 = v0 + v3;
    v1 = 95;
    v2 = v2 - v0;
    if (v4 > v2) { v4 = v2; }
    return v0;
}
int main(void) { return test_func(); }
