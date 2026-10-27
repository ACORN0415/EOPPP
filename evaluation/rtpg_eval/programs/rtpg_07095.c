int test_func(void) {
    int v0 = 37;
    int v1 = 4;
    int v2 = 56;
    int i;
    v2 = v2 - v0;
    if (v0 > v1) { v0 = v1; }
    v0 = 53;
    return v0;
}
int main(void) { return test_func(); }
