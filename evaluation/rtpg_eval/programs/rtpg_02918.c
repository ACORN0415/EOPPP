int test_func(void) {
    int v0 = 82;
    int v1 = 34;
    int v2 = 57;
    int v3 = 47;
    int i;
    if (v2 > v0) { v2 = v0; }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
