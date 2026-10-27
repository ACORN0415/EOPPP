int test_func(void) {
    int v0 = 77;
    int v1 = 0;
    int v2 = 60;
    int v3 = 82;
    int i;
    v2 = v2 + v2;
    if (v3 > v0) { v3 = v0; }
    return v0;
}
int main(void) { return test_func(); }
