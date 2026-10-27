int test_func(void) {
    int v0 = 29;
    int v1 = 76;
    int v2 = 82;
    int i;
    if (v1 > v0) { v1 = v0; }
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }
