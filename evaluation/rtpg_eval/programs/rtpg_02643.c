int test_func(void) {
    int v0 = 17;
    int v1 = 49;
    int v2 = 31;
    int v3 = 12;
    int i;
    if (v0 > v1) { v0 = v1; }
    v0 = v0 - v3;
    return v0;
}
int main(void) { return test_func(); }
