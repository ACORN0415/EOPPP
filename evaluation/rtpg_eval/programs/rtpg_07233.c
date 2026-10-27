int test_func(void) {
    int v0 = 63;
    int v1 = 98;
    int v2 = 5;
    int v3 = 65;
    int i;
    if (v0 > v2) { v0 = v2; }
    v3 = v3 - v0;
    return v0;
}
int main(void) { return test_func(); }
