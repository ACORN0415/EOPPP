int test_func(void) {
    int v0 = 45;
    int v1 = 50;
    int v2 = 29;
    int i;
    v0 = 10;
    v2 = v2 - v0;
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
