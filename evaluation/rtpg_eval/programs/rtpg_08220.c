int test_func(void) {
    int v0 = 3;
    int v1 = 31;
    int v2 = 82;
    int v3 = 53;
    int i;
    v0 = v0 + v2;
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
