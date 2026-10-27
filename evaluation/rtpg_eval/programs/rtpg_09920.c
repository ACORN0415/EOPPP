int test_func(void) {
    int v0 = 61;
    int v1 = 22;
    int v2 = 57;
    int v3 = 50;
    int i;
    if (v2 > v1) { v2 = v1; }
    v1 = v1 - v0;
    v2 = 94;
    return v0;
}
int main(void) { return test_func(); }
