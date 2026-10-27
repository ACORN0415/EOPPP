int test_func(void) {
    int v0 = 25;
    int v1 = 39;
    int v2 = 11;
    int v3 = 51;
    int i;
    if (v0 > v3) { v0 = v3; }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
