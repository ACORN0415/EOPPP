int test_func(void) {
    int v0 = 84;
    int v1 = 63;
    int v2 = 100;
    int v3 = 45;
    int i;
    if (v1 > v3) { v1 = v3; }
    v2 = v2 - v0;
    return v0;
}
int main(void) { return test_func(); }
