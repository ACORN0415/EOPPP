int test_func(void) {
    int v0 = 9;
    int v1 = 64;
    int v2 = 41;
    int v3 = 59;
    int i;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
