int test_func(void) {
    int v0 = 17;
    int v1 = 41;
    int v2 = 62;
    int v3 = 65;
    int i;
    v3 = v3 - v1;
    v0 = 63;
    if (v0 > v3) { v0 = v3; }
    return v0;
}
int main(void) { return test_func(); }
