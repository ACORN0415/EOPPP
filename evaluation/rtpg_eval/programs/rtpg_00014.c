int test_func(void) {
    int v0 = 9;
    int v1 = 69;
    int v2 = 36;
    int v3 = 76;
    int i;
    if (v0 > v2) { v0 = v2; }
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }
