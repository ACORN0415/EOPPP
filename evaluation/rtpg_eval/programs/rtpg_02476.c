int test_func(void) {
    int v0 = 58;
    int v1 = 27;
    int v2 = 23;
    int v3 = 18;
    int v4 = 33;
    int i;
    if (v4 > v1) { v4 = v1; }
    v4 = v4 + v0;
    return v0;
}
int main(void) { return test_func(); }
