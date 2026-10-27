int test_func(void) {
    int v0 = 68;
    int v1 = 29;
    int v2 = 34;
    int v3 = 0;
    int v4 = 12;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 + v0;
    return v0;
}
int main(void) { return test_func(); }
