int test_func(void) {
    int v0 = 51;
    int v1 = 89;
    int v2 = 26;
    int v3 = 67;
    int i;
    v0 = v0 - v2;
    if (v1 > v3) { v1 = v3; }
    return v0;
}
int main(void) { return test_func(); }
