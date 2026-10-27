int test_func(void) {
    int v0 = 13;
    int v1 = 23;
    int v2 = 29;
    int v3 = 15;
    int i;
    if (v1 > v0) { v1 = v0; }
    v1 = v1 + v0;
    return v0;
}
int main(void) { return test_func(); }
