int test_func(void) {
    int v0 = 16;
    int v1 = 23;
    int v2 = 52;
    int i;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
